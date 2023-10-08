#include <stdio.h>
/**
 * main - Entry point
 * by ramzy
 * Return: Always 0 (success)
*/
int main(void)
{

	int x  = 0;
	int y;

	while (x < 9)
	{
		y = x + 1;

		while (y < 10)
		{
			if (x != 0 || y != 1)
			{
				putchar(' ');
			}
			putchar(x + '0');
			putchar(y + '0');
			if (x != 8 || y != 9)
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
