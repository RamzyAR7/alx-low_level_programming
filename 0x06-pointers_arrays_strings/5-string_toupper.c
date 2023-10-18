#include "main.h"
/**
 * *string_toupper - a function that changes
 *  all lowercase letters of a string to uppercase
 * @a: array of char
 * Return: Always char
 * by ramzy
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}

	return (a);
}
