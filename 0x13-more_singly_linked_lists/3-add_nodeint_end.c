#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to head of list
 * @n: integer to be added to the list
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *b_head;

	listint_t *n_node = malloc(sizeof(listint_t));

	if (!n_node)
	{
		free(n_node);
		return (NULL);
	}
	if (n == 0)
	{
		n_node->n = 0;
	}
	else
	{
		n_node->n = n;
	}
	n_node->next = NULL;

	if (!*head)
	{
		*head = n_node;
	}
	else
	{
		b_head = *head;

		while (b_head)
		{
			b_head = b_head->next;
		}

		b_head->next = n_node;
	}

	return (n_node);
}
