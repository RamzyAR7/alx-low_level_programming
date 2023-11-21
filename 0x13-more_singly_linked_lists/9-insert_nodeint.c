#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to head of linked list
 * @idx: index of the list where the new node should be added
 * @n: integer to be included in new node
 *
 * Return: address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx, do not add node
 * and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *ptr;
	listint_t *n_node = malloc(sizeof(listint_t));

	if (!n_node)
	{
		free(n_node);
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;

	ptr = *head;
	if (idx == 0)
	{
		n_node->next = ptr;
		ptr = n_node;
		return (ptr);
	}
	else
	{
		for (i = 0; ptr && i < idx - 1; i++)
		{
			ptr = ptr->next;
		}
		if (!ptr)
		{
			free(ptr);
			return (NULL);
		}

		n_node->next = ptr->next;
		ptr->next = n_node;

		return (ptr);
	}
}
