#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to the head of the linked list
 *
 * Description: This function uses Floyd's Tortoise and Hare algorithm
 * to detect a loop in a linked list. If a loop is found, it returns
 * the address of the node where the loop starts, or NULL if there is no loop.
 * Return: The address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *check_node, *hare;

	check_node = hare = head;
	while (hare != NULL && hare->next != NULL)
	{
		check_node = check_node->next;
		hare = hare->next->next;

		if (check_node == hare)
		{
			check_node = head;
			while (check_node != hare)
			{
				check_node = check_node->next;
				hare = hare->next;
			}
			return (check_node);
		}
	}
	return (NULL);
}
