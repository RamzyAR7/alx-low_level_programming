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

	listint_t *current;
	listint_t *temp;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		current = *head;

		for (i = 0; current && i < index - 1; i++)
		{
			current = current->next;
		}
		if (!current || !current->next)
		{
			return (-1);
		}
		temp = current->next;
		current->next = temp->next;
		temp->next = NULL;

		free(temp);
		return (1);
	}
}
