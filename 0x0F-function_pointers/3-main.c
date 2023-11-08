#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: the number of command
 * @argv: array of string of command
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[3]);

	char *operator = argv[2];

	if ((*operator == '/' || *operator == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	int (*func)(int, int) = get_op_func(operator);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	int calc = func(n1, n2);

	printf("%d\n", calc);

	return (0);
}
