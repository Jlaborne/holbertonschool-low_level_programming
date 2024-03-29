#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Iterates through an array and applies action to each element
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 * @action: Pointer to the function to apply to each element.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	if (size == 0)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
