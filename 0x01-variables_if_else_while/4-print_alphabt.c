#include <stdio.h>
/**
 * main - Entry point
 * print all low alpha except (e,q)
 * don't use continue
 * Return: Always 0 (success)
*/
int main(void)
{
	int low_alpha = 97;

	while (low_alpha <= 122)
	{
		if (low_alpha != 101 && low_alpha != 113)
		{
			putchar(low_alpha);
		}

		low_alpha++;
	}
	putchar('\n');

	return (0);
}
