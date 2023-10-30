#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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

	/*to get the length of str*/
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
	 *because there is no array of c are yet init
	*/
	for (i = 0; i < length; i++)
	{
		c[i] = str[i]; /* to copy and double the string into c*/
	}

	c[i] = '\0'; /* the last elemnt str[length] = NULL*/

	return (c);
}
