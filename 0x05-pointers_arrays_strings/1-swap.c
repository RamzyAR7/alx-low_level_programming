#include "main.h"
#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer 1 from the main
 * @b: pointer 1 from the main
 * by ramzy
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
