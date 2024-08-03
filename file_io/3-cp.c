#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
* closefd - closes file descriptors
* @fd1: first file descriptor
* @fd2: second file descriptor
*/
void closefd(int fd1, int fd2)
{
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
* main - Entry point
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, 97 on incorrect number of arguments,
* 98 on read error, 99 on write error, 100 on close error
*/
int main(int argc, char *argv[])
{
	int fdr, fdw;
	char buffer[1024];
	ssize_t n_read, n_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fdr = open(argv[1], O_RDONLY);
	if (fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdw = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((n_read = read(fdr, buffer, sizeof(buffer))) > 0)
	{
		n_written = write(fdw, buffer, n_read);
		if (n_written == -1 || n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	closefd(fdr, fdw);
	return (0);
}
