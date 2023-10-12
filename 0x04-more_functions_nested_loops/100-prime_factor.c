/**
 * largest_prime - finds and prints the largest
 *	prime factor of number (number)
 *
 * @number: number to find
 */

void largest_prime(long number)
{
	int primenum, larg;

	while (number % 2 == 0)
		number = number / 2;

	for (primenum = 3; primenum <= _square(number); primenum += 2)
	{
		while (number % primenum == 0)
		{
			number = number / primenum;
			larg = primenum;
		}
	}

	if (number > 2)
		larg = number;
	printf("%d\n", larg);
}
#include <stdio.h>

/**
 * _square - finds the square root
 *
 * @i: input number
 *
 * Return: square root of x
 *
 */

double _square(double i)
{
	float square, x;

	x = 0;
	square = i / 2;

	while (square != x)
	{
		x = square;
		square = (i / x + x) / 2;
	}
	return (square);
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
