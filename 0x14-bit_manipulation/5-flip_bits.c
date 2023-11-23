#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip to get
 * from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number_flip = 0;

	unsigned long int xor_bits = n ^ m;

	while (xor_bits)
	{
		number_flip += xor_bits & 1;

		xor_bits >>= 1;
	}
	return (number_flip);
}
