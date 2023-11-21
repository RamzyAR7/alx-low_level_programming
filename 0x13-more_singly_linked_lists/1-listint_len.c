#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	
	return (counter);
}
