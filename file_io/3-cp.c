#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
* error_exit - prints an error message and exits the program with a given code
* @code: the exit code
* @format: the format string for the error message
* @arg: the argument for the format string
*/
void error_exit(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
* main - copies the content of a file to another file
* @argc: the number of arguments
* @argv: the argument vector
* Return: 0 on success, exit with various codes on failure
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t n_read, n_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written != n_read)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (n_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}
