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
	float sqr, tmp;

	sqr = i / 2;
	tmp = 0;

	while (sqr != tmp)
	{
		tmp = sqr;
		sqr = (i / tmp + tmp) / 2;
	}
	return (sqr);
}

/**
 * largest_prime - finds and prints the largest
 *			prime factor of number (num)
 *
 * @num: number to find
 */

void largest_prime(long int num)
{
	int prmnu, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prmnu = 3; prmnu <= _square(num); prmnu += 2)
	{
		while (num % prmnu == 0)
		{
			num = num / prmnu;
			largest = prmnu;
		}
	}

	if (num > 2)
		largest = num;
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
