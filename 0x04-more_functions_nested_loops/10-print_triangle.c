#include "main.h"
/**
 * print_triangle - a function that prints a triangle,
 *  followed by a new line.
 * @size: the length of triangle
 * by ramzy
 */
void print_triangle(int size)
{
	int i;
	int x;
	int y;

	for (i = 1; i <= size; i++)
	{
		for (x = size - 1; x >= 1; x--)
		{
			_putchar(' ');
		}
		for (y = 1; y <= i; y++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	return (0);
}
