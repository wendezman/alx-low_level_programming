#include "main.h"

/**
 * flip_bits - bits of a number to be flipped to get another number
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, check;
	unsigned int count, i;

	count = 0;
	check = 1;
	difference = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (difference & check))
			count++;
		check *= 2;
	}
	return (count);
}
