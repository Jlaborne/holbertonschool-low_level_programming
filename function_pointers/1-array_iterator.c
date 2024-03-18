#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - 
 * @array:
 * @size:
 * @action:
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
