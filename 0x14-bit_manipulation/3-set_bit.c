#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number in which the bit is to be changed
 * @index: the index, starting from 0 of the bit
 * Return: 1 if it worked, or -1 for an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
