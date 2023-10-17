#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: pointer of char
 * by ramzy
 */
void rev_string(char *s)
{
	int length = 0;
	char swp;
	int i;

	while (s[length])
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		swp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = swp;
	}
}
