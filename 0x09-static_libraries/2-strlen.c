#include "main.h"
#include <stdio.h>
/**
 * _strlen - a function that returns the length of a string.
 * @s: char of pointer
 * Return: Always length
 * by ramzy
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
