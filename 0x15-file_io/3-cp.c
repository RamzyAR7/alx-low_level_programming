#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024


void error_and_exit(int code, const char *message, const char *file_name)
{
	dprintf(STDERR_FILENO, message, file_name);
	exit(code);
}

int open_source_file(const char *file_from)
{
	int fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}
	return (fd_from);
}

int open_destination_file(const char *file_to)
{
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		error_and_exit(99, "Error: Can't write to file %s\n", file_to);
	}
	return (fd_to);
}

void copy_file_content(int fd_from, int fd_to)
{
	char buffer[BUF_SIZE];
	ssize_t read_size, write_size;

	while ((read_size = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		write_size = write(fd_to, buffer, read_size);
		if (write_size != read_size)
		{
			error_and_exit(99, "Error: Can't write to file %s\n", file_to);
		}
	}

	if (read_size == -1)
	{
		error_and_exit(98, "Error: Can't read from file\n", NULL);
	}
}

void close_file(int fd, const char *file_name)
{
	if (close(fd) == -1)
	{
		error_and_exit(100, "Error: Can't close fd %d\n", fd);
	}
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_and_exit(97, "Usage: cp file_from file_to\n", NULL);
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int fd_from = open_source_file(file_from);
	int fd_to = open_destination_file(file_to);

	copy_file_content(fd_from, fd_to);

	close_file(fd_from, file_from);
	close_file(fd_to, file_to);

	return 0;
}
