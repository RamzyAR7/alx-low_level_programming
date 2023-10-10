#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * by ramzy
*/
void jack_bauer(void)
{
	for (int i = 0; i < 24; i++)
	{
		for (int x = 0; i < 60; x++)
		{
			if (i < 10)
			{
				_putchar('0');
			}

			_putchar(i + '0');
			_putchar(':');

			if (x < 10)
			{
				_putchar('0');
			}

			_putchar(x + '0');
			_putchar('\n');
		}

	}

}