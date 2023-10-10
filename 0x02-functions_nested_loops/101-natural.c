#include"main.h"
/**
 * main - Entry point
 *
 * Description: computes the sum of allthe multiples of 3 or 5
 * below 1024 (excluded)
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int sum;
	int x;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
			sum += x;
	}

	printf("%d\n", sum);

	return (0);
}
