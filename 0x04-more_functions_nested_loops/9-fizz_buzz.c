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

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FuzzBuzz ");
			i++;
		}
		else
		{
			if (i % 3 == 0)
			{
				printf("Fizz ");
				i++;
			}
			else if (i % 5 == 0)
			{
				printf("Buzz ");
				i++;
			}
			else
			{
				printf("%d ", i++);
			}
		}

	}


	return (0);
}
