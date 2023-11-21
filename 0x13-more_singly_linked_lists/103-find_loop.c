#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head of linked list
 *
 * Return: address of node where loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current_node, *checker_node;

	current_node = head;
	while (current_node != NULL)
	{
		checker_node = head;
		while (checker_node != current_node)
		{
			if (checker_node == current_node->next)
				return (current_node->next);
			checker_node = checker_node->next;
		}
		current_node = current_node->next;
	}
	return (NULL);
}
