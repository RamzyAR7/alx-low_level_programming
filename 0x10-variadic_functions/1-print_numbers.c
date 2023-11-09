#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list argu;
	unsigned int i;
	int result = 0;

	va_start(argu, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(argu, const unsigned int);

		printf("%d", result);

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(argu);
}
