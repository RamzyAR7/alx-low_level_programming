#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - a function that creates an array of chars,
 *  and initializes it with a specific char.
 * @size: the size of array
 * @c: the start char
 * Return: char of pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return ('\0');
	}

	str = malloc(size * sizeof(c));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
