#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description:
 *  prints if the number stored in the variable n is positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("is positive\n");
	}
	else if (n < 0)
	{
	printf("is negative\n");
	}
	else if (n == 0)
	{
	printf("is zero\n");
	}

	return (0);
}
