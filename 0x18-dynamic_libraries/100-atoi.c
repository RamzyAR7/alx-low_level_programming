#include "main.h"
#include <stdio.h>
/**
 * _atoi -  a function that convert a string to an integer.
 * @s: pointer of char
 * Return: always int
 * by ramzy
*/
int _atoi(char *s)
{
	int i = 0;
	unsigned int nu = 0;
	int min = 1;
	int isi = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			isi = 1;
			nu = (nu * 10) + (s[i] - '0');
			i++;
		}

		if (isi == 1)
		{
			break;
		}

		i++;
	}

	nu *= min;
	return (nu);
}
