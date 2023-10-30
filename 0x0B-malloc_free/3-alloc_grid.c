#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - a function that returns a pointer
 *  to a 2 dimensional array of integers.
 * @width: the num of coloums
 * @height: the num of rows
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **num;
	int index_row;
	int x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	num = malloc((height) * sizeof(int));

	if (num == NULL)
	{
		return (NULL);
	}

	for (index_row = 0; index_row < height; index_row++)
	{
		num[index_row] = malloc(width * sizeof(int));

		if (num[index_row] == NULL)
		{
			for (x = 0; x < index_row; x++)
			{
				free(num[x]);
			}
			free(num);
			return (NULL);
		}

		for (x = 0; x < width; x++)
		{
			num[index_row][x] = 0;
		}
	}
	return (num);
}
