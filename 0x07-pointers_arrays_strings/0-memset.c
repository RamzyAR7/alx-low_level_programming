#include "main.h"
/**
 * *_memset - a function that fills memory with a constant byte.
 *
 * @s: This is a pointer to the start of the block of memory you want to fill.
 * @b: This is the byte value that you want to fill the memory with.
 *  It's provided as a char type,
 *  which is essentially a byte in the context of C.
 * @n: This specifies the number of bytes to fill starting from s.
 *
 * Return: Always char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}


}
