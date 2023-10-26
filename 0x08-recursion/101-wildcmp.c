#include "main.h"
/**
 * wildcmp - Write a function that compares two strings and
 *  returns 1 if the strings
 *  can be considered identical, otherwise return 0.
 * @s1: char of array 1
 * @s2: char of array 2
 * Return: 1 OR 0
 * By ramzy
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are at the end, return 1 */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the character in s2 is a *, it can represent zero or more characters */
	if (*s2 == '*')
	{
		/* Check if the string matches with zero characters represented by '*' */
		if (wildcmp(s1, s2 + 1))
			return (1);

		/* Check if the string matches with one or more characters represented by* */
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
	}

	/* If current characters match, move on to next character in both strings */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* If none of the above conditions are met, strings are not identical */
	return (0);
}
