#include "main.h"

/**
 * infinite_add - adds two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, x, z, l, v, n;

	for (i = 0; n1[i]; i++)
		;
	for (x = 0; n2[x]; x++)
		;
	if (i > size_r || x > size_r)
		return (0);
	v = 0;
	for (i -= 1, x -= 1, z = 0; z < size_r - 1; i--, x--, z++)
	{
		n = v;
		if (i >= 0)
			n += n1[i] - '0';
		if (x >= 0)
			n += n2[x] - '0';
		if (i < 0 && x < 0 && n == 0)
		{
			break;
		}
		v = n / 10;
		r[z] = n % 10 + '0';
	}
	r[z] = '\0';
	if (i >= 0 || x >= 0 || v)
		return (0);
	for (z -= 1, l = 0; l < z; z--, l++)
	{
		v = r[z];
		r[z] = r[l];
		r[l] = v;
	}

	return (r);
}
