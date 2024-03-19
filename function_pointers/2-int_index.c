#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - Iterates through an array and that searches for an integer
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 * @cmp: Pointer to the function that compare values
 * Return: 1 If it's true 2 if it's false
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size == 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
