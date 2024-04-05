#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The nubmer
 * @index: the given index
 * Return: The value of the bit
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1 << index;
	int bit = (n & mask) >> index;
	return bit;
}
