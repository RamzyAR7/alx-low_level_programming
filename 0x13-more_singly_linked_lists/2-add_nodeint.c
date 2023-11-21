#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to pointer to head of list
 * @n: integer to be added to the list
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (!n_node)
	{
		free(n_node);
		return (NULL);
	}

	n_node->n = n;
	n_node->next = *head;

	*head = n_node;

	return (*head);
}
