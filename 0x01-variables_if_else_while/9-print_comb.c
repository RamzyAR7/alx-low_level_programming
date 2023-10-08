#include <stdio.h>
/**
 * main - Entry point
 * by ramzy
 * Return: Always 0 (success)
*/
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(' ');

		putchar(x + '0');

		if (x != 9)
		{
			putchar(',');
		}

		x++;
	}
	putchar('\n');

	return (0);

}
