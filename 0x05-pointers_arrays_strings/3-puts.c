#include "main.h"
/**
 * _puts - a function that prints a string, followed
 *  by a new line, to stdout.
 * @str: pointer of char
 * by ramzy
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');
}
