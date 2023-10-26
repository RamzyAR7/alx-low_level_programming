#include "main.h"
/**
 * s_length - checks the length of a string
 * @c: is the string
 * Return: return the leng of the string
 **/
int s_length(char *c)
{
	if (*c == '\0')
		return (0);
	return (1 + s_length(c + 1));
}

/**
 * check - checks if the string is palindrome
 * @x: the index
 * @l: the length of the string
 * @s: the string
 * Return: 1 if is polindrome or 0 if not
 **/
int check(int x, int l, char *s)
{
	if (l > 0)
	{
		if (s[x] == s[l])
		{
			return (check(x + 1, l - 1, s));
		}
		else if (s[x] != s[l])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - a function that returns 1 if a string is
 * a palindrome and 0 if not.
 * @s: Array of char
 * Return: return 1 if the string is a palindrome or 0 otherwise
 **/
int is_palindrome(char *s)
{
	return (check(0, s_length(s) - 1, s));
}
