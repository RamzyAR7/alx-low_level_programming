#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - a function that allocates memory using
 * @b: unsigned int number
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	return (p);
}
