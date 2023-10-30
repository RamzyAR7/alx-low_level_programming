#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - a function that concatenates two strings.
 * @s1: array of char 1
 * @s2:array of char 2
 * Return: char of array
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int s1_l = 0;
	int s2_l = 0;
	int length;
	int i;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	/* to count the length of s1 */
	while (s1[s1_l])
	{
		s1_l++;
	}
	/* to count the length of s2 */
	while (s2[s2_l])
	{
		s2_l++;
	}
	length = s1_l + s2_l; /* to have the all length to malloc */

	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_l; i++)
	{
		str[i] = s1[i];
	}
	for (i = s1_l; i < length; i++)
	{
		str[i] = s2[i - s1_l]; /* to start from index 0 in the s1 array */
	}
	str[i] = '\0'; /* the last elemnt str[length] = NULL */

	return (str);
}
