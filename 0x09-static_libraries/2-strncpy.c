#include "main.h"
/**
 * *_strncpy - a function that concatenates two strings.
 * @dest: a pointer of char that receive
 * @src: a pointer of char that send
 * @n: the length of that we need
 * Return: Always dest
 * by ramzy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int x;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (x = i; x < n; x++)
	{
		dest[x] = '\0';
	}

	return (dest);
}
