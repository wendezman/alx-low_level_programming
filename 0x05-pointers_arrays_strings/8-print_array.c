#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: the array whose elements are to be printed.
 * @n: the number of elements of the array to be printed.
 */

void print_array(int *a, int n)
{
	int m = 0;

	while (m < n)
	{
		printf("%d", a[m]);
		if (m < n - 1)
		{
			printf(", ");
		}
		m++;
	}
	printf("\n");
}
