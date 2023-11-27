#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *         0 if filename is NULL
 *         0 if write fails or does not write expected amount of bytes
 *         0 if file cannot be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	char buffer[1024];

	while (letters > 0 && (bytes = read(fd, buffer, sizeof(buffer))) > 0)
	{
		ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes);

		if (bytes_written == -1)
		{
			close(fd);
			return (0);
		}

		letters -= bytes_written;
	}
	close(fd);
	return ((letters == 0) ? letters : 0);
}
