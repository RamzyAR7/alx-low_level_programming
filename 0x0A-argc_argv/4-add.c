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
	int i;
	int sum = 0;
	char *a;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (*a = argv[i]; *a; a++)
			{
				if (*a < '0' || *a > '9')
				{
					printf("Error\n");
					return (1);
				}

				sum += atoi(argv[i]);
			}
		}
	}

	printf("%d\n", sum);

	return (0);
}
