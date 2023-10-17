#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * , followed by a new line.
 * @s: char of pointer
 * by ramzy
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length]) /*!= '\0' */
	{
		length++;
	}
	for (i = length; i >= 0; i--)
	{
		_putchar(*(s + i)); /*s[i]*/
	}
	_putchar('\n');
}
