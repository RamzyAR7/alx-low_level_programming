#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 on success
 *         97 if argc is not 3
 *         98 if file_from cannot be read or if file_to cannot be created or
 *            written to
 *         99 if file_from cannot be closed
 *         100 if file_to cannot be closed or if close(fd2) fails
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, read_bytes, write_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* open file_from */
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* open file_to */
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd1);
		exit(99);
	}

	/* allocate buffer */
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		close(fd1);
		close(fd2);
		exit(99);
	}

	/* read file_from */
	read_bytes = read(fd1, buffer, 1024);
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		close(fd1);
		close(fd2);
		exit(98);
	}

	/* write to file_to */
	write_bytes = write(fd2, buffer, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close(fd1);
		close(fd2);
		exit(99);
	}

	free(buffer);
	close(fd1);
	close(fd2);

	return (0);
}
