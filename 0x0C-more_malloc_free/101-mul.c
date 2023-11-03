#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * validate_input - validates input and gets string length
 * @str: input string
 * Return: length if only digits, -1 otherwise
 */
int validate_input(char *str)
{
	int len = 0;

	while (str[len])
	{
		if (str[len] < '0' || str[len] > '9')
			return (-1);
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
 * initialize_product - initializes product array
 * @len: length of the product array
 * Return: initialized product array
 */
int *initialize_product(int len)
{
	int *product = malloc(sizeof(int) * len);

	if (!product)
		exit(98);
	for (int idx = 0; idx < len; idx++)
		product[idx] = 0;
	return (product);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int idx, *product, started = 0, num1_len, num2_len, total_len;
	char *num1 = argv[1], *num2 = argv[2];

	if (argc != 3)
		display_error();
	num1_len = validate_input(num1);
	if (num1_len == -1)
		display_error();
	num2_len = validate_input(num2);
	if (num2_len == -1)
		display_error();
	total_len = num1_len + num2_len + 1;
	product = initialize_product(total_len);
	for (--num1_len; num1_len >= 0; num1_len--)
		for (num2_len--; num2_len >= 0; num2_len--)
		{
			int overflow = (num1[num1_len] - '0') * (num2[num2_len] - '0');

			overflow += product[num1_len + num2_len + 1];
			product[num1_len + num2_len + 1] = overflow % 10;
			product[num1_len + num2_len] += overflow / 10;
		}

	for (idx = 0; idx < total_len; idx++)
	{
		if (product[idx] || started)
		{
			_putchar(product[idx] + '0');
			started = 1;
		}
	}
	if (!started)
		_putchar('0');
	_putchar('\n');
	free(product);
	return (0);
}
