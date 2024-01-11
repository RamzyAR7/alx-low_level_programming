#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0, num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
