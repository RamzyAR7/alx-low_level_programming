#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive function t0
 *  perform advanced binary search.
 * @array: Pointer to the first element of the array.
.* @size: size of the array
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary_recursive(int *array, size_t size, int value)
{
	size_t x = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (x && size % 2 == 0)
		x--;

	if (value == array[x])
	{
		if (x > 0)
			return (advanced_binary_recursive(array, x + 1, value));
		return ((int)x);
	}

	if (value < array[x])
		return (advanced_binary_recursive(array, x + 1, value));

	x++;
	return (advanced_binary_recursive(array + x, size - x, value) + x);
}

/**
 * advanced_binary - Searches for a value in a sorted array
 *                   of integers using advanced binary search.
 * @array: Pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	idx = advanced_binary_recursive(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
