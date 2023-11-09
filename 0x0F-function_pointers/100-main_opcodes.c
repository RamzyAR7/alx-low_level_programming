#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of main function.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, 1 or 2 on error.
 */
int main(int argc, char *argv[])
{
	int b, i;
	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	func_ptr = (unsigned char *)main;

	for (i = 0; i < b; i++)
	{
		printf("%.2x", func_ptr[i]);
		if (i < b - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
