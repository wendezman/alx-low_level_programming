#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array
 * @width: vertical grid
 * @height: horizontal grid
 * Return: Pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i, j, k, l;

	l = 0;
	if (width <= 0 || height <= 0)
		return (0);

	s = malloc(height * sizeof(int *));
	if (s == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		*(s + i) = malloc(width * sizeof(int));
		if (*(s + i) == 0)
		{
			l = 1;
			break;
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	if (l == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(*(s + k));
		}
		free(s);
	}
	return (s);
}
