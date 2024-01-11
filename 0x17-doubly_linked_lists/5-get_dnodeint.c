#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int x = 0;

	while (x != index  && current)
	{
		current = current->next;
		x++;
	}

	return (current->n);
}
