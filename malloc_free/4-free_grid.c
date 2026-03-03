#include <stdlib.h>

/**
 * free_grid - free 2d grid.
 * @h: height of grid.
 * @grid: grid to be freed.
 */
void free_grid(int **grid, int h)
{
int i;

if (!grid)
	return;

for (i = 0; i < h; i++)
	free(*(grid + i));

free(grid);
}
