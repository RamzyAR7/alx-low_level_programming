#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node of a listint_t linked list
 * @index: index of the node to return
 *
 * Return: the nth node of a listint_t linked list or NULL if the node doesn't
 * exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *current_node = head;

	unsigned int counter = 0;

	while (current_node && counter < index)
	{
		current_node = current_node->next;

		counter++;
	}

	if (!current_node)
	{
		return (NULL);
	}

	return (current_node);
}
