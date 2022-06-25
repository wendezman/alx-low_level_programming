#include "main.h"
#include <stdio.h>

/**
 * _abs - Calculates the absolute value of a given integer.
 * @c: The number to be calculated.
 * Return: Absolute value of a number
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * (-1));
	}
	else
	{
		return (c);
	}
}
