#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Iterates through an array and applies a given action to each element
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 * @action: Pointer to the function that represents the action to be applied to each element.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
