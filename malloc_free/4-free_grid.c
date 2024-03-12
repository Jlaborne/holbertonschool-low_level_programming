#include <stdlib.h>
/**
 * free_grid - Free a 2D array
 * @grid: the pointer to the array
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}


	free(grid);
}
