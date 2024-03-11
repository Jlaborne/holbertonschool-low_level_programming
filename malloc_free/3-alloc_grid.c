#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2D array
 * @width: width of the grid
 * @height: height of the grid
 * Return: A pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int x, y, **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(*array));
	if (array == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		array[x] = malloc(width * sizeof(int));
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
		array[x][y] = 0;
		}
	}
	return (array);
}
