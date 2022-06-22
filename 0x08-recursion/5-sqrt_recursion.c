#include "main.h"

/**
 * _sqrt_recursion2 - returns the natural square root of a number
 * @i: the square root of the given number
 * @j: the number in the square root
 * Return: 1 and -1
 */

int _sqrt_recursion2(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	return (_sqrt_recursion2(i + 1, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: 1 and 1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(0, n));
}
