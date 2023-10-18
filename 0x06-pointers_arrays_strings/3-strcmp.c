#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: char s1 of pointer
 * @s2: char s2 of pointer
 * Return: Alawys int
 * by ramzy
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]); /*for return if + , -*/
		}
	}
	return (s1[i] - s2[i]); /* for *s1 = *s2 ---> 0 */
}
