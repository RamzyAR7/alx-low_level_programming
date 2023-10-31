#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - a function that concatenates all the arguments of your program.
 * @av: 2D pointer of char
 * @ac: the number
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int total_length = 0, i, j, pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			total_length++;
		}
		total_length++;
	}

	str = (char *)malloc((total_length + 1) * sizeof(char));

	if (!str)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[pos++] = av[i][j];
		}
		str[pos++] = '\n';
	}
	str[pos] = '\0';

	return (str);
}
