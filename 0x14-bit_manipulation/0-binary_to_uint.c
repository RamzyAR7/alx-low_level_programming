#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;
	int length = 0;

	if (!b)
	{
		return (0);
	}

	while (b[length])
	{
		if (b[length] != '1' && b[length] != '0')
		{
			return (0);
		}

		length++;
	}

	for (i = 0; i < length; i++)
	{
		result <<= 1;

		if (b[i] == '1')
		{
			result += 1;
		}
	}

	return (result);
}
