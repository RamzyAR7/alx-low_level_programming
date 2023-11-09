#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argu;
	unsigned int i;
	char *str;

	va_start(argu, n);

	for (i = 0; i < n; i++)
	{
		str =  va_arg(argu, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(argu);
}
