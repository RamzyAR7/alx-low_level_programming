#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point
 * @argc: the number of command
 * @argv: the array of string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{

	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mult);

	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
