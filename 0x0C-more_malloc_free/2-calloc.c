#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset -  initializes n bytes of memory to m
 * @ptr: initial adress
 * @m: variable to initialize with
 * @n: number of bytes to initialize
 * Return: Return pointer char
 */

char *_memset(char *ptr, int m, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = m;

	return (ptr);
}

/**
 * _calloc -  allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: size of elements
 * Return: Pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	_memset(ptr, 0, size * nmemb);

	return (ptr);
}
