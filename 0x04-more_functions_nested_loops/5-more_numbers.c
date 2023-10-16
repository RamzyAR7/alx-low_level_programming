#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
 * by ramzy
 */
void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}

		_putchar('\n');
	}
}
