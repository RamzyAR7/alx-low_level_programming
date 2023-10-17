#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: pointer of char
 * by ramzy
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length])
	{
		length++;
	}

	for (i = (length - 1) / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
