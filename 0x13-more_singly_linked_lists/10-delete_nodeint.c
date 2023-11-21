#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to pointer to head of linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 * if index is invalid, return -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_index, *previous_index;

	current_index = *head;
	previous_index = NULL;

	if (index == 0)
	{
		if (!current_index)
		{
			return (-1);
		}

		current_index = current_index->next;
		*head = current_index;
		free(current_index);
		return (1);
	}
	else
	{
		for (i = 0; current_index && i < index; i++)
		{
			previous_index = current_index;
			current_index = current_index->next;
		}
		if (!current_index)
		{
			return (-1);
		}

		previous_index->next = current_index->next;
		current_index->next = NULL;
		free(current_index);
		return (1);
	}
}
