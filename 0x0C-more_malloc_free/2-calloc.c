#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - function allocates memory for an array
 * @nmemb: elements of size bytes
 * @size: bytes
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = (int *)malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	return (p);
}
