#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted
 * array using jump search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is found, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int low = 0, high = jump, i;

	if (array == NULL)
		return (-1);

	while (high < (int)size && array[high] < value)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		low = high;
		high += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", low, high);

	for (i = low; i < (int)size && array[i] <= value; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
