#include "main.h"
/**
 * *_strstr - a function that locates a substring.
 * @haystack: char of array
 * @needle: char of array
 * Return: char of array
 */
char *_strstr(char *haystack, char *needle)
{
	int index_hay;
	int index_ne;

	char *hay;

	if (!*needle)
	{
		return (haystack);
	}

	for (index_hay = 0; haystack[index_hay] != '\0'; index_hay++)
	{
		hay = &haystack[index_hay];
		index_ne = 0;

		while (needle[index_ne] != '\0' &&
		 haystack[index_hay + index_ne] == needle[index_ne])
		{
			index_ne++;
		}
		if (!needle[index_ne])
		{
			return (hay);
		}
	}
	return ('\0');
}
