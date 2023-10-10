#include "main.h"
/**
 * print_times_table - that prints the n times table, starting with 0.
 * @n : take the input
 * by ramzy
*/
void print_times_table(int n)
{
	int x, y, result;

	if (n < 0 || n > 15)
		return;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			result = x * y;

			if (y == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');
				if (result < 100)
					_putchar(' ');

				if (result >= 100)
					_putchar(result / 100 + '0');
				if (result >= 10)
					_putchar((result / 10) % 10 + '0');

				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
