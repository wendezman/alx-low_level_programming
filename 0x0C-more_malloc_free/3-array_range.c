#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  creates an array of integers from min to max
 * @min: the minimum value
 * @max: the maximum value
 * Return: Pointer to allocated memory or NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size, i, j;

	if (min > max)
		return (0);

	if (max > min)
		size = max - min + 1;
	else if (max == min)
		size = 2;

	ptr = malloc(sizeof(int) * size);
	if (ptr == 0)
		return (0);

	for (i = 0, j = min; j <= max; i++, j++)
		ptr[i] = j;
	if (max == min)
		ptr[i] = max;

	return (ptr);
}
