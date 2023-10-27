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
	int sum = 0;
	char *a;

	while (--argc)
	{
		for (*a = argv[argc]; *a; a++)
		{
			if (*a < '0' || *a > '9')
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[argc]);
		}
	}

	printf("%d\n", sum);

	return (0);
}
