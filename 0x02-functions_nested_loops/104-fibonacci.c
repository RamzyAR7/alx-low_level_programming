#include <stdio.h>

/**
 * main - Print the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a1 = 0, a2 = 0, b1 = 1, b2 = 2;
	unsigned long b1_temp, b2_temp, carry = 0;

	printf("%lu, %lu", b1, b2);

	unsigned int i

	for (unsigned int i = 3; i <= 98; i++)
	{
		b1_temp = b1;
		b2_temp = b2;

		/* Calculating Fibonacci for the lower part */
		b2 = (b1 + b2) % 1000000000;
		b1 = a1 + a2 + ((b1_temp + b2_temp) / 1000000000);

		/* Calculating Fibonacci for the higher part */
		a2 = (a1 + a2 + carry) % 1000000000;
		a1 = (b1_temp + b2_temp) / 1000000000;

		/* Checking for carry */
		if (a1 + a2 + carry > a1)
			carry = 0;
		else
			carry = 1;

		if (a2 > 0 || a1 > 0)
			printf(", %lu%lu", a2, b2);
		else
			printf(", %lu", b2);
	}

	printf("\n");
	return (0);
}
