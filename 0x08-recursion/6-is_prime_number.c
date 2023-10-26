#include "main.h"
/**
 * is_prime - check for prime number
 * @number: the number to check
 * @test: the test number
 * Return: 1 if the number is prime 0 else
 */
int is_prime(int number, int test)
{
	if (number == test)
	{
		return (1);
	}
	if (number % 2 == 0)
	{
		return (0);
	}

	return (is_prime(number, test + 1));
}

/**
 * is_prime_number - a function that returns 1
 *  if the input integer is a prime number, otherwise return 0
 * @n: the number as input
 * Return: a function that returns 1
 * by ramzy
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime(n, 2));
}
