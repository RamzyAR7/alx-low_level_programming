#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the head of the updated doubly linked list.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *access_b, *access_a, *new;

	access_b = access_a = *h;
	unsigned int i = 0;
	unsigned int x = 0;

	while (access_b && i != idx - 1)
	{
		access_b = access_b->next;
		i++;
	}
	while (access_a && x != idx)
	{
		access_a = access_a->next;
		x++;
	}
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	access_b->next = new;
	new->prev = access_b;
	access_a->prev = new;
	new->next = access_a;

	return (*h);
}
