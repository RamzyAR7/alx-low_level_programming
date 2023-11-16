#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list to find the number of elements of
 *
 * Return: the number of elements in the list_t list
 */
size_t list_len(const list_t *h)
{
	const list_t *ptrNode;

	unsigned int counter = 0;

	ptrNode = h;

	while (ptrNode)
	{
		ptrNode = ptrNode->next;
		counter++;
	}

	return (counter);
}
