#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Fizz-Buzz test
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FuzzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}

	}
	printf("Buzz\n");
	return (0);
}
