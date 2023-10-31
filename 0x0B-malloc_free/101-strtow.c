#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - function simply calculates the number of words in the string.
 * @str: pointer of char
 * Return: number of int
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		while (str[i] == ' ')
			i++;

		if (str[i] != ' ' && str[i] != '\0')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
		{
			i++;
		}
	}
	return (count);
}

/**
 * **strtow - a function that splits a string into words.
 * @str: pointer of char
 * Return: char
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, x, y, word_count, length;

	if (!str || !*str)
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));

	if (!words)
		return (NULL);

	for (x = 0; x < word_count; x++)
	{
		while (str[i] == ' ')
			i++;

		length = 0;
		while (str[i + length] != ' ' && str[i + length] != '\0')
			length++;

		words[x] = malloc((length + 1) * sizeof(char));

		if (!words[x])
		{
			for (y = 0; y < x; y++)
				free(words[y]);
			free(words);
			return (NULL);
		}

		for (y = 0; y < length; y++)
			words[x][y] = str[i + y];
		words[x][y] = '\0';

		i += length;
	}
	words[word_count] = NULL;
	return (words);
}
