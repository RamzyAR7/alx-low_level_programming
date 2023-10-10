#include"main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Prints the sum of even-valued
 * Fibonacci sequence not exceed 4million
 * by ramzy
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	unsigned long sum;
	float t_sum;

	while (1)
	{
		sum = f1 + f2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			t_sum += sum;

		f1 = f2;
		f2 = sum;
	}
	printf("%.0f\n", t_sum);

	return (0);
}
