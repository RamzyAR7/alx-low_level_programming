#include "main.h"
/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: char of array
 * @b: char type
 * @n: int type
 * Return: Always char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}


}
