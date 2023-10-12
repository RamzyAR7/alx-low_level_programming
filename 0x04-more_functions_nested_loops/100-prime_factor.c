#include <stdio.h>

/**
 * _square - finds the square root
 *
 * @i: input number
 *
 * Return: square root of i
 *
 */

double _square(double i)
{
	float sqr, tmep;

	tmep = 0;
	sqr = i / 2;

	while (sqr != tmep)
	{
		tmep = sqr;
		sqr = (i / tmep + tmep) / 2;
	}
	return (sqr);
}

/**
 * largest_prime - finds and prints the largest
 *			prime factor of number (n)
 *
 * @n: number to find
 */

void largest_prime(long int n)
{
	int prmnu, largest;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	for (prmnu = 3; prmnu <= _square(n); prmnu += 2)
	{
		while (n % prmnu == 0)
		{
			n = n / prmnu;
			largest = prmnu;
		}
	}

	if (n > 2)
	{
		largest = n;
	}

	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	largest_prime(612852475143);

	return (0);
}
