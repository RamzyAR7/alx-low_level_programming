#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the head of the updated doubly linked list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *access;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

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
		*head = new;
		access->prev = new;
		new->next = access;
	}
	return (*head);
}
