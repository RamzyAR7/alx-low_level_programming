#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: array of char
 * @accept: array of char
 * Return: char array
*/
char *_strpbrk(char *s, char *accept)
{
	int index_s;
	int index_accept;

	for (index_s = 0; s[index_s] != '\0'; index_s++)
	{
		for (index_accept = 0; accept[index_accept] != '\0'; index_accept++)
		{
			if (s[index_s] == accept[index_accept])
			{
				return (&s[index_s]);
			}
		}
	}
	return ('\0');

}
