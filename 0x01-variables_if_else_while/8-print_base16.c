#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int num = 0;
	int hex;

	while (num <= 15)
	{
		if (num >= 0 && num <= 9)
		{
			putchar(num + '0');
		}
		else if (num > 9)
		{
			hex = num + 87;

			putchar(hex);
		}

		num++;
	}
	putchar('\n');

	return (0);
}