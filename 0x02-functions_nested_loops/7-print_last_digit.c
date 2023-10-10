#include "main.h"
/**
 * print_last_digit -  function that prints the last digit of a number.
 * @n : the character to check
 * by ramzy
 * Return: 0
*/
int print_last_digit(int n)
{
	int lst_n;

	if (n < 0)
	{
		lst_n = -1 * (n % 10);
	}
	else
	{
		lst_n = n % 10;
	}

	_putchar(lst_n + '0');

	return (lst_n);
}
