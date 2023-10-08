#include <stdio.h>

/**
 * main - Entry point
 * 00 01 --> 98 99
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 0;
	int y;

	while (x < 100)
	{
		y = x + 1;

		while (y < 100)
		{
			if (x != 00 || y != 01)
			{
				putchar(' ');
			}
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');

			if (x != 98 || y != 99)
			{
				putchar(',');
			}

			y++;
		}

		x++;

	}

	putchar('\n');


	return (0);
}

