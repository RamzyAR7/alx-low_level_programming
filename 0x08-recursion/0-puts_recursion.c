#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: char of array
 *
 * by ramzy
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	_putchar('\n');
}
