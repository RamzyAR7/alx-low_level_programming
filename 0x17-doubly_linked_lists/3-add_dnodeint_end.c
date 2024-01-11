#include "lists.h"

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
