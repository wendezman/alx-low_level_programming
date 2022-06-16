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
	int j;
	int ori;

	j = n - 1;
	i = 0;

	while (i < n / 2)
	{
		ori = a[i];
		a[i] = a[j];
		a[j] = ori;
		j--;
		i++;
	}
	return (0);
}
