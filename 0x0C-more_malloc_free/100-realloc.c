#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size:  is the size, in bytes, of the allocated space for
 * @new_size: is the new size, in bytes of the new memory block
 * Return: pointer of char
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr;
	char *p1 = ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	n_ptr = malloc(new_size * sizeof(char));

	if (n_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < old_size; i++)
	{
		n_ptr[i] = p1[i];
	}

	free(ptr);

	return (n_ptr);
}
