#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to head of linked list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr_rev = NULL, *ptr_next = NULL;

	if (!head || !*head)
		return (NULL);
	while (*head)
	{
		ptr_next = (*head)->next;
		(*head)->next = ptr_rev;
		ptr_rev = *head;
		if (!ptr_next)
			break;
		*head = ptr_next;
	}
	return (*head);
}
