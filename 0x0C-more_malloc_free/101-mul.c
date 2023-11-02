#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _print - prints a string followed by a new newline
 * @s: str to print
 */

void _print(char *s)
{
	int a = 0;

	while (s[a])
	{
		_putchar(s[a]);
		a++;
	}
}

/**
 * _atoi - converts a string to an int
 * @c: pointer to string
 * Return: converted int
 */

int _atoi(const char *c)
{
	int s = 1;
	unsigned long int re = 0, f, a;

	for (f = 0; !(c[f] >= 48 && c[f] <= 57); f++)
		if (c[f] == '-')
			s *= -1;

	for (a = f; c[a] >= 48 && c[a] <= 57; a++)
	{
		re *= 10;
		re += (c[a] - 48);
	}

	return (s * re);
}

/**
 * print_int - prints an integer
 * @n: int
 * Return: void
 */

void print_int(unsigned long int n)
{
	unsigned long int divi = 1;
	unsigned long int a, re;

	for (a = 0; n / divi > 9; a++, divi *= 10)
		;

	for (; divi >= 1; n %= divi, divi /= 10)
	{
		re = n / divi;
		_putchar('0' + re);
	}
}

/**
 * main - returns the product of two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3 || !_atoi(argv[1]) || !_atoi(argv[2]))
	{
		_print("Error\n");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
