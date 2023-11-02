#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1:char 1
 * @s2:char 2
 * @n: number
 * Return: The returned pointer shall point to a newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, z;
	unsigned int s1_l = 0;
	unsigned int s2_l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_l])
	{
		s1_l++;
	}
	while (s2[s2_l])
	{
		s2_l++;
	}
	if (n >= s2_l)
	{
		n = s2_l;
	}

	p = (char *)malloc((s1_l + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (z = 0; z < n; z++)
	{
		p[i + z] = s2[z];
	}

	p[i + z] = '\0';
	return (p);
}
