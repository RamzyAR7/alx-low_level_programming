#include "main.h"
/**
 * *_strncat - a function that concatenates two strings.
 * @dest: a pointer of char that receive
 * @src: a pointer of char that send
 * @n: the length of that we need
 * Return: Always dest
 * by ramzy
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i;

	while (dest[length])
	{
		length++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[length] = src[i];
		}

		length++;
	}

	dest[length] = '\0';

	return (dest);
}
