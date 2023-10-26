#include "main.h"
/**
 * helper - Recursive helper function to check if a number has a square root.
 * @n: The number to find the square root of.
 * @guess: Current guess for the square root.
 *
 * Return: The square root if it exists, otherwise -1.
 */
int helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (helper(n, guess + 1));
}
/**
 * _sqrt_recursion - a function that returns
 *  the natural square root of a number.
 * @n: the number as input
 * Return: he natural square root of a number.
 * by ramzy
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, 1));
}
