#include "main.h"

/**
 * set_bit - Set the value of a bit to 1
 * @n: Pointer to an integer
 * @index: Index given to set the change the value of the bit
 * Return: -1 If it fails and 1 if it works
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n ^= (1 << index);
	return (1);
}
