#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 * @n: the character to check
 * by ramzy
 * Return: 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}


}
