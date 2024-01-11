#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the head of the updated doubly linked list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *access;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		access = *head;
		while (access->next)
		{
			access = access->next;
		}
		access->next = new;
		new->prev = access;
	}

	return (*head);
}
