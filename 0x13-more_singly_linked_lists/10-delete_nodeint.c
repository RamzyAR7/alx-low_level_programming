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
	listint_t *current_index, *tmp;

	current_index = *head;
	tmp = NULL;

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
		for (i = 0; current_index && i < index - 1; i++)
		{
			if (!current_index)
			{
				return (-1);
			}

			current_index = current_index->next;
		}

		tmp = current_index->next;
		if (!tmp)
		{
			return (-1);
		}

		current_index->next = tmp->next;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}
}
