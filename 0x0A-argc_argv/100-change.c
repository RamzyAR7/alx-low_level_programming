#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point
 * @argc: the number of command
 * @argv: the array of string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int N_coins;
	int coins = 0;

	if (argc == 2)
	{
		N_coins = atoi(argv[1]);

		if (N_coins > 0)
		{
			while (N_coins >= 0)
			{
				if (N_coins >= 25)
					N_coins -= 25;

				else if (N_coins >= 10)
					N_coins -= 10;

				else if (N_coins >= 5)
					N_coins -= 5;

				else if (N_coins >= 2)
					N_coins -= 2;

				else if (N_coins >= 1)
					N_coins -= 1;
				else
					break;
				coins++;
			}
		}
		else
		{
			printf("0\n");
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", coins);
	return (0);
}
