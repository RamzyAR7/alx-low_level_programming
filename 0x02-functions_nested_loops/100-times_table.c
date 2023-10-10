#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n : take num as input
 * by ramzy
 */
void print_times_table(int n)
{
	int num;
	int x = 0;
	int y = 0;

	if (n <= 15 && n >= 0)
	{
		while (x <= n)
		{
			while (y <= n)
			{

				num = x * y;

				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (num >= 10)
				{
					_putchar(num / 10 + '0');
					_putchar(num % 10 + '0');
				}
				else if (num < 10 && y != 0)
				{
					_putchar(' ');
					_putchar(num  % 10 + '0');
				}
				else
				{
					_putchar(num  % 10 + '0');
				}

				y++;
			}

			y = 0;
			_putchar('\n');
			x++;

		}

	}
}