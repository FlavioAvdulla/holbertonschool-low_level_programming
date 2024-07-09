#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid
* @grid: the address of the two dimensional grid
* @height: height of the grid
*
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
if (grid == NULL || height <= 0)
{
    return;
}

for (int i = 0; i < height; i++)
{
    free(grid[i]);
}

free(grid);
}