#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the list_t list to add the node at the end of it
 * @str: string to initialize the new node with
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int counter = 0;

	list_t *strNode, *end;

	end = malloc(sizeof(list_t));

	if (!end)
	{
		return (NULL);
	}

	if (!str)
	{
		end->str = NULL;
		end->len = 0;
	}
	else
	{
		end->str = strdup(str);
		while (str[counter])
		{
			counter++;
		}
		end->len = counter;
	}
	end->next = NULL;
	if (!*head)
	{
		*head = end;
	}
	else
	{
		strNode = *head;
		while (strNode->next)
		{
			strNode = strNode->next;
		}
		strNode->next = end;
	}
	return (end);
}
