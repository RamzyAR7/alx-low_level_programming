#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range -  a function that creates an array of integers.
 * @min: the min number to start from it
 * @max: the nax number to end at it
 * Return: pointer of int
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int n = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(n * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		p[i] = min++;
	}
	return (p);
}
