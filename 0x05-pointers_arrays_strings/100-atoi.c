#include "main.h"
#include <stdio.h>
#include <stdbool.h>
/**
 * _atoi -  a function that convert a string to an integer.
 * @s: pointer of char
 * Return: always int
 * by ramzy
*/
int _atoi(char *s)
{
	int res = 0;
	bool started = false;
	int sign = 1;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && !started)
		{
			sign *= -1;
		}
		else if (s[i] == '+' && !started)
		{
			continue;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = true;
			res = res * 10 + (s[i] - '0');
		}
		else if (started)
		{

			break;
		}
	}
	return (res * sign);
}
