#include "main.h"
#include <stdio.h>

/**
 * print - prints a s bytes
 * @c: buffer to print
 * @a: bytes of buffer to print
 * @n: line of buffer to print
 *
 * Return: void
 */

void print(char *c, int a, int n)
{
	int x, l;

	for (x = 0; x <= 9; x++)
	{
		if (x <= a)
		{
			printf("%02x", c[n * 10 + x]);
		}
		else
		{
			printf("  ");
		}
		if (x % 2)
		{
			putchar(' ');
		}
	}
	for (l = 0; l <= a; l++)
	{
		if (c[n * 10 + l] > 31 && c[n * 10 + l] < 127)
		{
			putchar(c[n * 10 + l]);
		}
		else
		{
			putchar('.');
		}
	}
}

/**
 * print_buffer - a function that prints a buffer.
 * @b: for print
 * @size: size
 */

void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print(b, 9, i);
		}
		else
		{
			print(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
	{
		putchar('\n');
	}
}
