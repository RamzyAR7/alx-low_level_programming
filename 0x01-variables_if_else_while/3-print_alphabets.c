#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alawys 0 (success)
*/
int main(void)
{
	int low_alpha = 97;
	int up_alpha = 65;

	while (low_alpha <= 122)
	{
		putchar(low_alpha);
		low_alpha++;
	}
	while (up_alpha <= 90)
	{
		putchar(up_alpha);
		up_alpha++;
	}
	putchar('\n');

	return (0);
}
