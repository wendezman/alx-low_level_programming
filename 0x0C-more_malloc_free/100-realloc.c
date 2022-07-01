#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copies memory
 * @new: memory to be copied to
 * @old: memory to be copied from
 * @n: size of memory to copy
 * Return: copied memory
 */

char *_memcpy(char *new, char *old, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		new[i] = old[i];
	return (new);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous memory
 * @old_size: current size of memory
 * @new_size: the size of memory after reallocation
 * Return: Pointer to reallocated memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *Nptr;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		Nptr = malloc(new_size);
		if (Nptr == 0)
			return (0);
		free(ptr);
		return (Nptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	Nptr = malloc(new_size);
	if (Nptr == 0)
		return (0);

	_memcpy(Nptr, ptr, old_size);
	free(ptr);

	return (Nptr);
}
