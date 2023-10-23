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
	int index_ne = 0;

	char *hay;
	char *ne;

	for (index_hay = 0; haystack[index_hay] != '\0'; index_hay++)
	{
		hay = haystack;
		ne = needle;

		while (ne[index_ne] != '\0' && haystack[index_hay] == ne[index_ne])
		{
			index_hay++;
			index_ne++;
		}
		if (!ne[index_ne])
		{
			return (hay);
		}
	}
	return ('\0');
}
