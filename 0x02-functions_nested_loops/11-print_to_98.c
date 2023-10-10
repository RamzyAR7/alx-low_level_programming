#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers
 * from n to 98, followed by a new line
 * @n : check with it
 * by ramzy
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);

			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);

			n++;
		}
	}

	printf("98\n");

}
