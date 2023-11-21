#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list, even with a loop
 * @h: Double pointer to the head of the linked list
 *
 * Description: This function frees a listint_t linked list,
 * even if the list contains a loop. It goes through the list
 * only once and sets the head to NULL. It breaks the loop
 * if found.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t new_node = 0;
	int address;
	listint_t *current_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		address = *h - (*h)->next;

		if (address > 0)
		{
			current_node = (*h)->next;
			free(*h);
			*h = current_node;
			new_node++;
		}
		else
		{
			free(*h);
			*h = NULL;
			new_node++;
			break;
		}
	}

	*h = NULL;
	return (new_node);
}
