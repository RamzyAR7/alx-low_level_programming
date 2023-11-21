#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to pointer to head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *buffer;
	listint_t *b_head;
	b_head = *head;

	while (b_head->next != NULL)
	{
		buffer = b_head->next;

		free(b_head);

		b_head = buffer;
	}

	b_head = NULL;
}