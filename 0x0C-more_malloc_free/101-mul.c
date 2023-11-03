#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * contains_only_digits - determines if the string has only digit characters
 * @str: string to examine
 *
 * Return: 1 if only digits, 0 otherwise
 */
int contains_only_digits(char *str)
{
	int idx = 0;

	while (str[idx])
	{
		if (str[idx] < '0' || str[idx] > '9')
			return (0);
		idx++;
	}
	return (1);
}

/**
 * get_length - computes the length of a string
 * @str: string to measure
 *
 * Return: length of the string
 */
int get_length(char *str)
{
	int len = 0;

	while (str[len])
	{
		len++;
	}
	return (len);
}

/**
 * display_error - shows error message and exits program
 */
void display_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @args_count: argument count
 * @args: argument array
 *
 * Return: 0 on success
 */
int main(int args_count, char *args[])
{
	char *num1, *num2;
	int num1_len, num2_len, total_len, idx,
		overflow, val1, val2, *product, started = 0;
	num1 = args[1], num2 = args[2];
	if (args_count != 3 || !contains_only_digits(num1)
	|| !contains_only_digits(num2))
		display_error();
	num1_len = get_length(num1), num2_len = get_length(num2);
	total_len = num1_len + num2_len + 1;
	product = malloc(sizeof(int) * total_len);
	if (!product)
		return (1);
	for (idx = 0; idx <= num1_len + num2_len; idx++)
		product[idx] = 0;
	for (num1_len = num1_len - 1; num1_len >= 0; num1_len--)
	{
		val1 = num1[num1_len] - '0', overflow = 0;
		for (num2_len = get_length(num2) - 1;
			 num2_len >= 0; num2_len--)
		{
			val2 = num2[num2_len] - '0';
			overflow += product[num1_len + num2_len + 1] + (val1 * val2);
			product[num1_len + num2_len + 1] = overflow % 10;
			overflow /= 10;
		}
		if (overflow)
			product[num1_len + num2_len + 1] += overflow;
	}
	for (idx = 0; idx < total_len - 1; idx++)
	{
		if (product[idx])
			started = 1;
		if (started)
			_putchar(product[idx] + '0');
	}
	if (!started)
		_putchar('0');
	_putchar('\n');
	free(product);
	return (0);
}
