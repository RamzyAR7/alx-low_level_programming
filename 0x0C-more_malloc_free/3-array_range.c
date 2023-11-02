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
	int n = max - min;

	if (min > max)
	{
		return (NULL);
	}

	p = (int *)malloc(n * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}

	return (p);
}
