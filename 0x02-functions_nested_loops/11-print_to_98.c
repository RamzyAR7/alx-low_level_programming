#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers
 * from n to 98, followed by a new line
 * @n : check with it
 * by ramzy
*/
void print_to_98(int n)
{
	while (n < 99)
	{
		_putchar(n + '0');

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}

		n++;
	}
}
