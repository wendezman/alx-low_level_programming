#include "main.h"

/**
 * _memset - fills the first n bytes of a memory area
 * @s: pointer to a memory area
 * @b: a constant byte to fill the memory area
 * @n: the number of bytes to be filled
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	while (m < n)
	{
		s[m] = b;
		m++;
	}
	return (s);
}
