#include "main.h"
/**
 * *_strcat - a function that concatenates two strings.
 * @dest: a pointer of char that receive
 * @src: a pointer of char that send
 * Return: Always dest
 * by ramzy
*/
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i;

	while (dest[length])
	{
		length++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];

		length++;
	}

	dest[length] = '\0';

	return (dest);
}
