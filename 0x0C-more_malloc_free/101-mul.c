#include <stdlib.h>
#include <stdio.h>
/**
 * _isdigit - tells if the string consists of digits
 * @n: pointer to current item in argument
 * Return: return 0 if all digits, 1 if not all digits.
 */
int _isdigit(char *n)
{
	int i;

	i = 0;
	while (n[i])
	{
		if (n[i] >= '0' && n[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
/**
 * _atoi - converts a string of ascii digits to the values they represent
 * @c: pointer to the source string
 * Return: value of digits
 */
int _atoi(char *c)
{
	int i, result;

	i = result = 0;
	while (c[i])
	{
		if (c[i] >= '0' && c[i] <= '9')
		{
			result *= 10;
			result += (c[i] - '0');
		}
		i++;
	}
	return (result);
}
/**
 * main - main function call
 * @argc: argument count
 * @argv: 2D array of arguments
 * Return: return 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int i;

	malloc();
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
