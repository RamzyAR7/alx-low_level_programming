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
	size_t counter = 0;
	listint_t *current_node, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current_node = *h;
	while (current_node != NULL)
	{
		if (current_node->next >= current_node)
		{
			temp = current_node->next;
			current_node->next = NULL;
			current_node = temp;
			continue;
		}

		temp = current_node->next;
		free(current_node);
		current_node = temp;
		counter++;
	}

	*h = NULL;
	return (counter);
}
