#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid
 * @grid: address of two dimensional array
 * @height: height of the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
