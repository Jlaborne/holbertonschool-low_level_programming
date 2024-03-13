#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers
 *@min: the first integer
 *@max: the last integer
 *
 *Return: poiner to the array
 */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
