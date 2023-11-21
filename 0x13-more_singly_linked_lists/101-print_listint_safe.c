#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of linked list
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *n_node = head, *ptr_rev = NULL;

	if (!head)
		return (0);
	while (n_node)
	{
		printf("[%p] %d\n", (void *)n_node, n_node->n);
		counter++;
		if (n_node > ptr_rev)
			ptr_rev = n_node;
		else
		{
			printf("-> [%p] %d\n", (void *)ptr_rev, ptr_rev->n);
			break;
		}
		n_node = n_node->next;
	}
	return (counter);
}
