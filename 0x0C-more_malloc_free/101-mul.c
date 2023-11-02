#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_number(char *str);
void print_error_and_exit(void);
long int multiply(char *num1, char *num2);

/**
 * main - Entry point, multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	long int result;

	if (argc != 3)
	{
		print_error_and_exit();
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		print_error_and_exit();
	}

	result = multiply(argv[1], argv[2]);
	printf("%ld\n", result);

	return (0);
}

/**
 * is_number - Checks if a string is a number
 * @str: The string to be checked
 *
 * Return: 1 if string is a number, 0 otherwise
 */
int is_number(char *str)
{
	int i = 0;

	if (str[0] == '\0')
		return (0);

	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);

		i++;
	}

	return (1);
}

/**
 * print_error_and_exit - Prints an error and exits
 */
void print_error_and_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - Multiplies two numbers given as strings
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Return: The result of the multiplication
 */
long int multiply(char *num1, char *num2)
{
	return (atol(num1) * atol(num2));
}
