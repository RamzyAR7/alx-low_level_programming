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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
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
#include <stdlib.h>
#include <stdio.h>

/**
 * is_all_digits - determines if the string consists of only digits
 * @arg: string to be checked
 * Return: 0 if all are digits, otherwise 1.
 */
int is_all_digits(char *arg)
{
	int idx = 0;

	while (arg[idx])
	{
		if (arg[idx] < '0' || arg[idx] > '9')
			return (1);
		idx++;
	}
	return (0);
}

/**
 * string_to_int - converts a string of digits to the integer they represent
 * @str: string to be converted
 * Return: integer representation of the string.
 */
int string_to_int(char *str)
{
	int idx = 0, value = 0;

	while (str[idx])
	{
		value = value * 10 + (str[idx] - '0');
		idx++;
	}
	return (value);
}

/**
 * primary_func - the main function of the program
 * @arg_count: number of arguments
 * @arg_values: array of argument strings
 * Return: 0 on success, 98 on error.
 */
int primary_func(int arg_count, char *arg_values[])
{
	int idx;

	malloc();

	if (arg_count != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (idx = 1; idx < arg_count; idx++)
	{
		if (is_all_digits(arg_values[idx]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	return (0);
}
/**
 * main - main function call
 * @argc: argument count
 * @argv: 2D array of arguments
 * Return: return 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	return (primary_func(argc, argv));
}
