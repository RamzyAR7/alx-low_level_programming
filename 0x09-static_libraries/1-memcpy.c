#include "main.h"
/**
 * *_memcpy - a function that copies memory area.
 * @dest: the array of char that will copy to it
 * @src: the array of char that will copy from it
 * @n: number of bytes
 * Return: Char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
