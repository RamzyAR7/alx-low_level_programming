#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return -1;

	dlistint_t *before = *head;
	dlistint_t *after, *tmp;
	unsigned int i = 0;

	while (before && i != index)
	{
		tmp = before;
		before = before->next;
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
		return 1;
	}
	else if (index > 0 && before)
	{
		after = before->next;
		if (after)
		{
			before->next = after->next;
			if (after->next)
				after->next->prev = before;
			free(after);
			return 1;
		}
	}

	return -1;
}
