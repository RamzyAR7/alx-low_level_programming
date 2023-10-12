#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: take the length of loop
 * by ramzy
*/
void print_square(int size)
{
	int i;
	int x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (x = 1; x <= size; x++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

	_putchar('\n');
}
