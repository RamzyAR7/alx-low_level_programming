#include "lists.h"
/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to pointer to head of linked list
 *
 * Return: number of nodes in list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *current_node;
	listint_t *checker_node;

	if (h == NULL || *h == NULL)
		return (0);

	current_node = *h;
	while (current_node != NULL)
	{
		counter++;

		checker_node = *h;
		while (checker_node != current_node)
		{
			if (checker_node == current_node->next)
			{
				*h = NULL;
				return (counter);
			}
			checker_node = checker_node->next;
		}

		current_node = current_node->next;
		free(*h);
		*h = current_node;
	}

	*h = NULL;
	return (counter);
}
