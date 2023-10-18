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
	int swp;

	for (i = 0; i < n / 2; i++)
	{
		swp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = swp;
	}
}
