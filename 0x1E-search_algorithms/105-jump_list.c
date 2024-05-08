#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not found or head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	if (list == NULL || size == 0)
		return (NULL);

	size_t jump = sqrt(size);
	listint_t *current = list, *prev = NULL;

	while (current->n < value && current->next != NULL)
	{
		prev = current;
		for (size_t i = 0; current->next != NULL && i < jump; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		   prev->index, current->index);

	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	while (prev->n < value)
	{
		if (prev->next == NULL || prev->index >= current->index)
			return (NULL);

		prev = prev->next;
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	}

	if (prev->n == value)
		return (prev);

	return (NULL);
}
