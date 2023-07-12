#include <stdlib.h>

/**
 * free_grid ...
 * @grid: ...
 * @height: ...
 *
 * Return: ...
 */
void free_grid(nt **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
