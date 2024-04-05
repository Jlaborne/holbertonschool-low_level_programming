#include "main.h"

/**
 * flip_bits - Counts the numbers of bit to flip to get
 *             to one number to an other one
 * @n: Integer
 * @m: Integer
 * Return: -1 If it fails and 1 if it works
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
