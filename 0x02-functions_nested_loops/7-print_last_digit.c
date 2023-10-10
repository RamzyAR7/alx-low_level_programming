#include "main.h"
/**
 * print_last_digit -  function that prints the last digit of a number.
 * @n : the character to check
 * by ramzy
 * Return: 0
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}

	return (n % 10);
}
