#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list to add the node at the beginning of it
 * @str: string to initialize the new node with
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int counter = 0;

	list_t *first;

	first = malloc(sizeof(list_t));

	if (!first)
	{
		return (NULL);
	}

	first->str = _strdup(str);
	while (str[counter])
	{
		counter++;
	}
	first->len = counter;

	first->next = *head;
	*head = first;

	return (*head);
}
/**
 * *_strdup - function returns a pointer to a new string which is
 *  a duplicate of the string
 * @str: array of char
 * Return: the address
 */
char *_strdup(char *str)
{
	char *c;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	/* to get the length of str */
	while (str[length])
	{
		length++;
	}

	c = malloc((length + 1) * sizeof(char)); /* +1 this for NULL OP*/

	if (c == NULL)
	{
		return (NULL);
	}

	/**
	 *  we use length instate of c[i] != '\0'
	 * because there is no array of c are yet init
	 */
	for (i = 0; i < length; i++)
	{
		c[i] = str[i]; /* to copy and double the string into c */
	}

	c[i] = '\0'; /* the last elemnt str[length] = NULL */

	return (c);
}
