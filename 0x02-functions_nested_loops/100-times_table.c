#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: take num as input
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
			y = 0;
			while (y <= n)
			{
                num = x * y;
                if (y == 0)
                {
                    _putchar('0');
                }
                else
                {
                    _putchar(',');
                    _putchar(' ');
                    if (num < 10)
                    {
                        _putchar(' ');
                    }
                    if (num < 100)
                    {
                        _putchar(' ');
                    }
                    if (num >= 100)
                    {
                        _putchar(num / 100 + '0');
                    }
                    if (num >= 10)
                    {
                        _putchar((num / 10) % 10 + '0');
                    }
                    _putchar(num % 10 + '0');
                }
                y++;
            }
            _putchar('\n');
            x++;
        }
    }
}