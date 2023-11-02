#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_for_digit - Checks if a string consists only of digits
 * @number: The string to check
 *
 * Return: 1 if only digits, 0 otherwise
 */
int check_for_digit(char *number)
{
	while (*number)
	{
		if (*number < '0' || *number > '9')
			return (0);
		number++;
	}
	return (1);
}

/**
 * multiply - Multiplies two numbers represented as strings
 * @num1: The first number string
 * @num2: The second number string
 */
void multiply(char *num1, char *num2)
{
	int length1 = string_length(num1), length2 = string_length(num2);
	int totalLength = length1 + length2, i, j, k, product, carry;
	int *result = allocate_and_initialize(totalLength, sizeof(int));

	if (!result)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = length1 - 1; i >= 0; i--)
	{
		for (j = length2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0');
			carry = result[i + j + 1] + product;
			result[i + j] += carry / 10;
			result[i + j + 1] = carry % 10;
		}
	}

	k = 0;
	while (k < totalLength - 1 && result[k] == 0)
		k++;
	for (; k < totalLength; k++)
		printf("%d", result[k]);
	printf("\n");
	free(result);
}

/**
 * string_length - Calculates the length of a string recursively
 * @s: The string to calculate the length
 *
 * Return: The length of the string
 */
int string_length(char *s)
{
	if (*s)
		return (1 + string_length(s + 1));
	return (0);
}

/**
 * allocate_and_initialize - Allocates and zeros memory
 * @count: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory
 */
void *allocate_and_initialize(unsigned int count, unsigned int size)
{
	unsigned int total_size = count * size, index;
	void *allocated_memory;
	char *pointer;

	if (count == 0 || size == 0)
		return (NULL);

	allocated_memory = malloc(total_size);

	if (allocated_memory != NULL)
	{
		pointer = (char *)allocated_memory;
		for (index = 0; index < total_size; index++)
			pointer[index] = 0;
	}
	return (allocated_memory);
}

/**
 * main - Entry point, multiplies two numbers passed as arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !check_for_digit(argv[1]) || !check_for_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	multiply(argv[1], argv[2]);
	return (0);
}
