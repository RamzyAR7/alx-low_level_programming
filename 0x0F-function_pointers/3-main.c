#include "3-calc.h"
/**
 * main - entry point
 * @argc: the number of command
 * @argv: array of string of command
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *operator;
	int n1;
	int n2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	operator = argv[2];

	if ((*operator == '/' || *operator == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(operator)

	if (func == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(n1, n2));

	return (0);
}
