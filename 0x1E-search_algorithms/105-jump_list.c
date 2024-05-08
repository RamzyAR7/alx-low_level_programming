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
	size_t jump, i;
	listint_t *current, *prev;

	if (!list || size == 0)
		return (NULL);

	jump = sqrt(size);
	current = list;
	while (current->n < value)
	{
		prev = current;
		for (i = 0; current->next && i < jump; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (!current->next)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		   prev->index, current->index);
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	while (prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (!prev->next || prev->index == current->index)
			return (NULL);
		prev = prev->next;
	}
	if (prev->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		return (prev);
	}
	return (NULL);
}
