#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - the function that returns the memory back
 * @grid: the stack
 * @height: the parameter of the stack
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
