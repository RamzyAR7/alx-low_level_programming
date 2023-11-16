#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list to add the node at the beginning of it
 * @str: string to initialize the new node with
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	unsigned int counter = 0;

	first = malloc(sizeof(list_t));

	if (!first)
	{
		free(first);
		return (NULL);
	}

	first->str = strdup(str);
	while (first->str)
	{
		counter++;
	}
	first->len = counter;

	first->next = *head;
	*head = first;

	return (head);
}
