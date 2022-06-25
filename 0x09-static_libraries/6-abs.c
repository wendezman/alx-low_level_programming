#include "main.h"
#include <stdio.h>

/**
 * _abs - Calculates the absolute value of a given integer.
 * @n: The number to be calculated.
 * Return: Absolute value of a number
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
