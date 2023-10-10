#include"main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * prints the first 50 Fibonacci numbers
 * starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	unsigned long sum;

	int c;

	for (c = 0; c < 50; c++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (c == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
