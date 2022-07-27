#include "main.h"
#include <stdlib.h>

/**
 * free_grid-a function that frees a dimensional grid previously
 * crated by your alloc_grid
 * @grid:integer type of pointer
 * @height:integer type of value
 * Return:0 always
 */

void free_grid(int **grid, int height)
{
int v;

for (v = 0; v < height; v++)
free(grid[v]);
free(grid);

}
