#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	va_list argu;

	va_start(argu, n);

	int i;
	int result = 0;

	for (i = 0; i < n; i++)
	{
		result += va_arg(argu, int);
	}

	va_end(argu);

	return (result);
}
