#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 *         97 if argc is not 3
 *         98 if file_from cannot be read or file_to cannot be created or
 *            written to
 *         99 if file_from cannot be closed
 *         100 if file_to cannot be closed
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char *buffer;
	mode_t file_perm;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* open file_from */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* open file_to */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	/* allocate buffer */
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	/* read file_from */
	read_bytes = read(fd_from, buffer, 1024);
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	/* write to file_to */
	write_bytes = write(fd_to, buffer, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close(fd_from);
		close(fd_to);
		exit(99);
	}

	free(buffer);
	close(fd_from);
	close(fd_to);

	return (0);
}
