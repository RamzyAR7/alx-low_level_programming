#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 * , followed by a new line
 * @a: pointer of char
 * @n: number as input
 * by ramzy
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{

		if (a[i] != a[n - 1])
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	_putchar('\n');
}
