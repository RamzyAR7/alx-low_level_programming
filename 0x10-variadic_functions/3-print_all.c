#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char *const format, ...)
{

	va_list argu;
	unsigned int i = 0;
	char *str;

	va_start(argu, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(argu, int));
			break;
		case 'i':
			printf("%d", va_arg(argu, int));
			break;
		case 'f':
			printf("%f", va_arg(argu, double));
			break;
		case 's':
			str = va_arg(argu, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			 format[i] == 's') &&
			format[(i + 1)] != '\0')
		{
			printf(", ");
		}

		i++;
	}

	printf("\n");
	va_end(argu);
}
