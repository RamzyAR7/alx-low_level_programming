#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - a function that copies the string pointed to by src
 * , including the terminating null byte (\0)
 * , to the buffer pointed to by dest
 * @dest: pointer of char
 * @src: pointr of char
 * Return: always char
 * by ramzy
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	while (src[length])
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
