#include "main.h"
/**
 * *cap_string - a function that capitalizes all words of a string.
 * @a: char of array
 * Return: Always char
 * by ramzy
 */
char *cap_string(char *a)
{
	int i;
	int x;

	char arr[] = " \t\n,;.!?\"(){}";

	for (i = 0; a[i] != '\0'; i++)
	{

		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (a[i] == a[0])
			{
				a[0] -= 32;
			}
			else
			{
				for (x = 0; x <= 12; x++)
				{
					if (a[i - 1] == arr[x])
					{
						a[i] -= 32;
					}
				}
			}
		}
	}

	return (a);
}
