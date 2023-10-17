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
	char paswd[84];
	int i = 0, sum = 0, x, z;

	srand(time(0));

	while (sum < 2772)
	{
		paswd[i] = 33 + rand() % 94;
		sum += paswd[i++];
	}

	paswd[i] = '\0';

	if (sum != 2772)
	{
		x = (sum - 2772) / 2;
		z = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			x++;

		for (i = 0; paswd[i]; i++)
		{
			if (paswd[i] >= (33 + x))
			{
				paswd[i] -= x;
				break;
			}
		}
		for (i = 0; paswd[i]; i++)
		{
			if (paswd[i] >= (33 + z))
			{
				paswd[i] -= z;
				break;
			}
		}
	}
	printf("%s", paswd);

	return (0);
}
