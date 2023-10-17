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
	int st;

	while (str[length])
	{
		length++;
	}

	if (length % 2 == 0)
	{
		st = length / 2;
	}
	else
	{
		str = (length - 1) / 2;
	}

	for (i = st ; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
