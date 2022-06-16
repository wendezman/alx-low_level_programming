#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n);
{
	int i = 0;
	int j = n - 1;
	int ori;

	while (i < n)
	{
		ori = a[i];
		a[i] = a[j];
		a[j] = ori;
		j--;
		i++;
	}

	return (0);
}
