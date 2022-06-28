#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * @size: the size of the array
 * @c: initialization character
 * Return: a Pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *m;

	m = malloc(sizeof(char) * size);

	if (m == 0)
	{
		return (0);
	}

	for (n = 0; n < size; n++)
	{
		*(m + n) = c;
	}

	*(m + n) = '\0';

	return (m);
}
