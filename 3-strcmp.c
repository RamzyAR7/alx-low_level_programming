#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare 2 string
 *
 * @s1:string
 * @s2:strmp
 *
 * Return:int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
			break;
		}
	}
	return (s1[i] - s2[i]);
}
