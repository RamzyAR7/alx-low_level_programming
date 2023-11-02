#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - Write a function that checks for a digit (0 through 9).
 *
 * @n: number.
 *
 * Return: 1 if c is lowercase or Returns 0 otherwise
 */

int _isdigit(char *n)
{

	while (*n)
	{
		if (*n < '0' || *n > '9')
		{

			return (0);
		}
		n++;
	}

	return (1);
}

/**
 * mul_two_numbers - Write a program that multiplies two positive numbers.
 * Return: Always 0 (Success)
 * @f_n: the first number to multiply
 * @s_n: the second number to multiply
 */

void mul_two_numbers(char *f_n, char *s_n)
{
	int f_l = _strlen_recursion(f_n);
	int s_l = _strlen_recursion(s_n);

	int totalLength = f_l + s_l;

	int *result = _calloc(totalLength, sizeof(int));

	int i_1, i_2, i_3, multi, result_Mult;

	if (!result)
	{
		printf("Error\n");
		exit(98);
	}

	for (i_1 = f_l - 1; i_1 >= 0; i_1--)
	{

		for (i_2 = s_l - 1; i_2 >= 0; i_2--)
		{

			multi = (f_n[i_1] - '0') *
					(s_n[i_2] - '0');

			result_Mult = result[i_1 + i_2 + 1] + multi;

			result[i_1 + i_2] += result_Mult / 10;
			result[i_1 + i_2 + 1] = result_Mult % 10;
		}
	}
	i_3 = 0;

	while (i_3 < totalLength - 1 && result[i_3] == 0)
		i_3++;
	for (; i_3 < totalLength; i_3++)
		printf("%d", result[i_3]);
	printf("\n");
	free(result);
}

/**
 * _strlen_rec - Write a function that
 * returns the length of a string.
 * Return: Always 0 (Success)
 * @s: The string to be printed
 */

int _strlen_rec(char *s)
{
	int length = 0;

	if (*s)
	{

		length = 1 + _strlen_recursion(s + 1);

		return (length);
	}

	return (length);
}

/**
 * _calloc - Write a function that allocates
 * memory for an array, using malloc.
 * Return: Always 0 (Success)
 * @number: the number of elements you want to allocate memory for
 * @SizeOfElement: the size of each element in bytes
 * --------------------------
 * By Youssef Hassane
 */

void *_calloc(unsigned int number,
			  unsigned int SizeOfElement)
{

	unsigned int t_size;

	void *AllocatedMem;

	unsigned int index = 0;

	char *p;

	if (number == 0 || SizeOfElement == 0)
	{
		return (NULL);
	}

	t_size = number * SizeOfElement;

	AllocatedMem = malloc(t_size);

	if (AllocatedMem != NULL)
	{

		p = (char *)AllocatedMem;
		for (; index < t_size; index++)
		{
			p[index] = 0;
		}
	}
	return (AllocatedMem);
}

/**
 * main - Write a program that multiplies two numbers
 * Return: Always 0 (Success)
 * @Count: Number of command-line arguments
 * @Vector: Array of command-line arguments
 */
int main(int Count, char *Vector[])
{

	if (Count != 3 || !_isdigit(Vector[1]) || !_isdigit(Vector[2]))
	{
		printf("Error\n");
		exit(98);
	}
	multiply_two_numbers(Vector[1], Vector[2]);

	return (0);
}
