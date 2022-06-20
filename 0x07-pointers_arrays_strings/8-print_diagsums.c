#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of a square matrix
 * @a: the square matrix
 * @size: size of array in one dimension
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int n, m;
	int sum_diag1 = 0, sum_diag2 = 0;

	for (n = 0, m = size - 1; n < (size * size); n += size + 1, m += size - 1)
	{
		sum_diag1 = sum_diag1 + a[n];
		sum_diag2 = sum_diag2 + a[m];
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
	return (0);
}
