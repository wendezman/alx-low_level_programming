#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n);
{
	int i;
	int j = n - 1;
	int ori;

	for (i = 0; i < n; i++)
	{
		ori = a[i];
		a[i] = a[j];
		a[j] = ori;
		j--;
	}
}
