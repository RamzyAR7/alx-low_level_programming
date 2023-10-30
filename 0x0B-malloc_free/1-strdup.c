#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - function returns a pointer to a new string which is
 *  a duplicate of the string
 * @str: array of char
 * Return: the address
 */
char *_strdup(char *str)
{
	char *c;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}

	c = malloc((length + 1) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		c[i] = str[i];
	}

	c[i] = '\0';

	return (c);
}
