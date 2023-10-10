#include "main.h"
/**
 * _islower -  a function that checks for lowercase character
 * by ramzy
 * Returns: 1 if c is lowercase
 * Return: 0 otherwise
*/

int _islower(int c);
{
	if(c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}