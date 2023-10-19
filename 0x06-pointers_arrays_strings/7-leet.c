#include "main.h"
/**
 * *leet - a function that encodes a string into 1337.
 * @a: char of array
 * Return: Always char
 * by ahmed ramzy
 */
char *leet(char *a)
{
	int i;
	int x;

	char n[] = "43071";

	char c1[] = "AEOTL";
	char c2[] = "aeotl";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (x = 0; x < 5; x++)
		{
			if (a[i] == c1[x] || a[i] == c2[x])
			{
				a[i] = n[x];
			}
		}
	}

	return (a);
}
