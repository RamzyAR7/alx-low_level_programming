#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int low_alpha = 97;

	while (low_alpha <= 122)
	{
		if (low_alpha == 101 || low_alpha == 113)
		{
			low_alpha++;
			continue;
		}
		putchar(low_alpha);
		low_alpha++;
	}
	putchar('\n');

	return (0);
}
