#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: the size of allocated memory
 * Return: pointer to allocated memory
 */ 

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (ptr);
}
