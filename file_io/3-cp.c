#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void print_error(const char *message, const char *filename, int exit_code) {
dprintf(STDERR_FILENO, message, filename);
exit(exit_code);
}

int main(int argc, char *argv[]) {
int file_from, file_to, read_bytes, write_bytes;
char buffer[BUFFER_SIZE];

if (argc != 3) {
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

file_from = open(argv[1], O_RDONLY);
if (file_from == -1) {
	print_error("Error: Can't read from file %s\n", argv[1], 98);
}

file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1) {
	close(file_from);
	print_error("Error: Can't write to %s\n", argv[2], 99);
}

while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0) {
	write_bytes = write(file_to, buffer, read_bytes);
	if (write_bytes != read_bytes) {
		close(file_from);
		close(file_to);
		print_error("Error: Can't write to %s\n", argv[2], 99);
	}
}

if (read_bytes == -1) {
	close(file_from);
	close(file_to);
	print_error("Error: Can't read from file %s\n", argv[1], 98);
}

if (close(file_from) == -1) {
	print_error("Error: Can't close fd %d\n", argv[1], 100);
}

if (close(file_to) == -1) {
	print_error("Error: Can't close fd %d\n", argv[2], 100);
}

return 0;
}