#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords for the program
 *
 * Return: Always 0.
 */
int main(void)
{
	char passwd[84];
	int i = 0, sum = 0, x, z;

	srand(time(0));

	while (sum < 2772)
	{
		passwd[i] = 33 + rand() % 94;
		sum += passwd[i++];
	}

	passwd[i] = '\0';

	if (sum != 2772)
	{
		x = (sum - 2772) / 2;
		z = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			x++;

		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (33 + x))
			{
				passwd[i] -= x;
				break;
			}
		}
		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (33 + z))
			{
				passwd[i] -= z;
				break;
			}
		}
	}
	printf("%s", passwd);

	return (0);
}
