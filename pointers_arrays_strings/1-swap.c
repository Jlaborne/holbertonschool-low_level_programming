#include "main.h"
/**
 * swap_int - swap the value of a & b
 * @a : int to swap to b
 * @a : int to swap to a
 * Description: swap the value of a to b and b to a
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
