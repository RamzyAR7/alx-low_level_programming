#include "main.h"
/**
 * reverse_array - a function that reverses
 *  the content of an array of integers.
 * @a: int of pointer
 * @n: is the number of elements of the array
 * by ramzy
 */
void reverse_array(int *a, int n) /* n = 5 */
{
	int i;

	i = n - 1; /* i --> index */

	while (i >= 0) /* 4 --> 0 */
	{
		_putchar(a[i]);

		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}

		i--;
	}

	_putchar('\n');
}
