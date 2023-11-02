#include <stdlib.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _strlen - returns the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: char to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_error - prints error message and exits with status 98
 */
void print_error(void)
{
	char error_msg[] = "Error\n";
	int i;

	for (i = 0; error_msg[i] != '\0'; i++)
		_putchar(error_msg[i]);
	exit(98);
}

/**
 * multiply - multiplies two numbers and prints the result
 * @num1: the first number as a string
 * @num2: the second number as a string
 */
void multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1), len2 = _strlen(num2);
	int i, j, k, carry, n1, n2, sum, idx1, idx2;
	char *result;

	if (len1 == 0 || len2 == 0)
		print_error();

	result = malloc(len1 + len2);
	if (!result)
		print_error();

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		idx2 = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[idx1 + idx2] + carry;
			carry = sum / 10;
			result[idx1 + idx2] = sum % 10;
			idx2++;
		}

		if (carry > 0)
			result[idx1 + idx2] += carry;
		idx1++;
	}

	k = len1 + len2 - 1;
	while (k >= 0 && result[k] == 0)
		k--;

	if (k == -1)
		_putchar('0');

	for (; k >= 0; k--)
		_putchar(result[k] + '0');

	_putchar('\n');
	free(result);
}

/**
 * main - Entry point, program to multiply two large numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, exits with 98 on error
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 3)
		print_error();

	for (i = 0; argv[1][i]; i++)
		if (!_isdigit(argv[1][i]))
			print_error();

	for (i = 0; argv[2][i]; i++)
		if (!_isdigit(argv[2][i]))
			print_error();

	multiply(argv[1], argv[2]);
	return (0);
}
