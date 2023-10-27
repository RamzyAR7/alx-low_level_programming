#include <stdio.h>
/**
 * main - the entry point
 * @argc: the number of command
 * @argv: the array of string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	int mult;

	mult = atoi(argv[1]) * atoi(argv[2]);

	return (0);
}
