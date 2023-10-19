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

	char n[] = "4433007711";
	char c[] = "aAeEoOtTiL";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (x = 0; c[x] != '\0'; x++)
		{
			if (a[i] == c[x])
			{
				a[i] = n[x];
			}
		}
	}

	return (a);
}
