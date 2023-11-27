#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

void close_fd(int fd);
/**
 * close_fd - close a file descriptor
 * @fd: file descriptor
 * Return: nothing
 */
void close_fd(int fd)
{
	int r = close(fd);

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy a file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_file, write_file;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_fd(fd_from);
		exit(99);
	}
	do {
		read_file = read(fd_from, buffer, BUFFER_SIZE);
		if (read_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(98);
		}

		write_file = write(fd_to, buffer, read_file);
		if (write_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(99);
		}

	} while (read_file > 0);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
