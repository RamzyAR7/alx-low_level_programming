#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Alawys 0 (success)
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);

		i++;
	}
	putchar('\n');

	return (0);
}
