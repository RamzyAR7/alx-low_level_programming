#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list argu;
	unsigned int i;
	int result = 0;

	va_start(argu, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(argu, int);
	}

	va_end(argu);

	return (result);
}
