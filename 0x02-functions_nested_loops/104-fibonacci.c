#include <stdio.h>

/**
 * main - Print the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int i;
	unsigned long a1 = 0, a2 = 0, b1 = 1, b2 = 2;
	unsigned long carry = 0, temp1, temp2;

	printf("%lu, %lu", b1, b2);

	for (i = 3; i <= 98; i++)
	{
		temp1 = b1;
		temp2 = b2;
		b2 = (b1 + b2) % 1000000000;
		b1 = a1 + a2 + ((temp1 + temp2) / 1000000000);

		carry = (a1 + a2 + carry > a1) ? 0 : 1;
		a2 += a1 + carry;
		a1 = (temp1 + temp2) / 1000000000;

		if (a2 > 0)
			printf(", %lu%lu", a2, b2);
		else
			printf(", %lu", b2);
	}

	printf("\n");
	return (0);
}
