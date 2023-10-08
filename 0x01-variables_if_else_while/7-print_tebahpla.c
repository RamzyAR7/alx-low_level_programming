#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int low_alpha = 122;

	while (low_alpha >= 97)
	{
		putchar(low_alpha);

		low_alpha--;
	}
	putchar('\n');

	return (0);
}
