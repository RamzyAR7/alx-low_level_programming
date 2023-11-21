#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *current = head;
	const listint_t *checker;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		counter++;

		checker = head;
		while (checker != current)
		{
			if (checker == current->next)
			{
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				return (counter);
			}
			checker = checker->next;
		}

		if (current->next <= current)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			counter++;
			break;
		}

		current = current->next;
	}

	return (counter);
}
