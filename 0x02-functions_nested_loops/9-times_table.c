#include "main.h"
/**
 * times_table -  function that prints the 9 times table, starting with 0.
 * by ramzy
*/
void times_table(void)
{
	int num;
	int x = 0;
	int y = 0;

	while (x < 10)
	{
		while (y < 10)
		{

			num = x * y;

			if (y != 0)
			{
				_putchar(',');
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
		}

		_putchar('\n');

	}

}
