#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current_node, *old_node;

	if (!list)
		return (NULL);
	current_node = list, old_node = list;
	while (current_node)
	{
		old_node = current_node;
		if (current_node->express)
			current_node = current_node->express;
		else
		{
			while (current_node->next)
				current_node = current_node->next;
			break;
		}
		printf("Value checked at index [%lu] = [%d]\n",
			   current_node->index, current_node->n);
		if (current_node->n >= value)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		   old_node->index, current_node->index);
	while (old_node->index <= current_node->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			   old_node->index, old_node->n);
		if (old_node->n == value)
			return (old_node);
		if (old_node->index == current_node->index)
			break;
		old_node = old_node->next;
	}
	return (NULL);
}
