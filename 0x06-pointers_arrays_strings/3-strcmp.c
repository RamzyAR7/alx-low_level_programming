#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: char of pointers
 * @s2: char of pointer
 * Return: Always the compares int
 * by ramzy
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		return (0);
	}
	if (s1[i] > s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		return ((s2[i] - s1[i]) * -1);
	}

}
