#include "main.h"
/**
 * print_diagonal - Write a function that draws a diagonal
 *  line on the terminal.
 * by ramzy
 *@n: the length of loop
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int x;

		for (i = 1; i <= n; i++)
		{
			for (x = 1; x < i; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}

}
