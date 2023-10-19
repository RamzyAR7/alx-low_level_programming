#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 *
 * @a: char of array
 *
 * Return: char s
 */

char *rot13(char *a)
{
	int i, x;
	char c1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (x = 0; c1[x] != '\0'; x++)
		{
			if (c1[x] == a[i])
			{
				a[i] = c2[x];

			}
		}
	}

	return (a);
}
