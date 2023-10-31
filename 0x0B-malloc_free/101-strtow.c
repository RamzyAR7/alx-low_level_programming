#include <stdlib.h>
#include "main.h"

/**
 * count_word - function simply calculates the number of words in the string.
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int count, c, i;

	count = 0;
	i = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			i++;
		}
	}

	return (i);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **word, *tmp;
	int i, x = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	word = (char **) malloc(sizeof(char *) * (words + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				word[x] = tmp - c;
				x++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	word[x] = NULL;

	return (word);
}
