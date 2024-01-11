#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	dlistint_t *access_b, *access_a, *tmp;
	unsigned int i = 0;

	access_b = *head;

	while (access_b && i != index)
	{
		tmp = access_b;
		access_b = access_b->next;
		i++;
	}

	if (index == 0)
	{
		if (*head)
		{
			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	else if (index > 0 && access_b)
	{
		access_a = access_b->next;
		if (access_a)
		{
			access_b->next = access_a->next;
			if (access_a->next)
				access_a->next->prev = access_b;
			free(access_a);
			return (1);
		}
	}

	return (-1);
}
