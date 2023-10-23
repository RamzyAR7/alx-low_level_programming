#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: array of char
 * @accept: array of char
 * Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int index_s;
	int index_accept;

	for (index_s = 0; s[index_s] != '\0'; index_s++)
	{
		for (index_accept = 0; accept[index_accept] !=  '\0'; index_accept++)
		{
			if (s[index_s] == accept[index_accept])
			{
				count++;
				break;
			}
		}
	}

	return (count);

}
