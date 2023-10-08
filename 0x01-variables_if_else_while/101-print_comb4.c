#include <stdio.h>

/**
 * main - Entry point
 * 012 --> 789
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 0;
	int y;
	int z;

	while (x < 8)
	{
		y = x + 1;

		while (y < 9)
		{
			z = y + 1;

			while (z < 10)
			{
				if (x != 0 || y != 1 || z != 2)
				{
					putchar(' ');
				}

				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if (x != 7 || y != 8 || z != 9)
				{
					putchar(',');
				}

				z++;
			}

			y++;
		}

		x++;

	}
	putchar('\n');

	return (0);
}
