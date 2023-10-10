#include "main.h"
#include <stdio.h>

/**
 * get_num_length - Returns the length of digits in a number.
 * @n: The number
 *
 * Return: The number of digits
 */
int get_num_length(unsigned long n)
{
	int length = 0;

	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers.
 */
void print_fibonacci(void)
{
	int count, num_zeros_to_print;
	unsigned long f1 = 1, f2 = 2, sum, max_val = 100000000;
	unsigned long f1_overflow = 0, f2_overflow = 0, sum_overflow = 0;

	for (count = 1; count <= 98; ++count)
	{
		if (f1_overflow > 0)
			printf("%lu", f1_overflow);
		num_zeros_to_print = get_num_length(max_val) - 1 - get_num_length(f1);
		for (int i = 0; i < num_zeros_to_print; i++)
			printf("0");
		printf("%lu", f1);
		sum = (f1 + f2) % max_val;
		sum_overflow = f1_overflow + f2_overflow + (f1 + f2) / max_val;
		f1 = f2;
		f1_overflow = f2_overflow;
		f2 = sum;
		f2_overflow = sum_overflow;
		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * main - Program entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci();
	return (0);
}
