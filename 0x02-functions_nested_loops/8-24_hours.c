#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * by ramzy
*/
void jack_bauer(void)
{
	int x  = 0;
	int y = 0;

	while (x < 24)
	{
		while (y < 60)
		{

			if (x < 10)
			{
				_putchar('0');
			}

			_putchar(x + '0');
			_putchar(':');

			if (y < 10)
			{
				_putchar('0');
			}

			_putchar(y + '0');
			_putchar('\n');

			y++;
		}

		x++;
	}

}
