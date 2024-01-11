#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the data (n) of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * by ramzy
 * Return: The sum of all the data (n) of the doubly linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int total = 0;

	while (head)
	{
		head = head->next;
		total += head->n;
	}

	return (total);
}
