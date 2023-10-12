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

		/*for fizz*/
		if (i % 3 == 0)
			printf("Fizz");
		/*for buzz*/
		if (i % 5 == 0)
			printf("Buzz");
		/*for else number*/
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		/*to do not add space*/
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
