#include "main.h"
/**
 * *_strchr - a function that locates a character in a string.
 * @s: char of array
 * @c: the char value (byte)
 * Return: Always char
*/
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (&s[index]); /*Return pointer to the found character*/
		}
	}

	return ('\0');

}
