#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	const list_t *ptrNode;

	int counter = 0;

	ptrNode = h;

	while (ptrNode)
	{

		if (ptrNode->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptrNode->len, ptrNode->str);
		}

		ptrNode = ptrNode->next;
		counter++;
	}

	return (counter);
}
