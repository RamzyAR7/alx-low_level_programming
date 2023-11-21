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
	const listint_t *current, *checker;

	current = head;
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

		current = current->next;
	}

	return (counter);
}
