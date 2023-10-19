#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 *
 * @a: char of array
 *
 * Return: char a
 */

char *rot13(char *a)
{
	int i, x;
	char c1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (x = 0; x < 52; x++)
		{
			if (a[i] == c1[x])
			{
				a[i] = c2[x];

			}
		}
	}

	return (a);
}
