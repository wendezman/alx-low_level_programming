#include "main.h"

/**
 * is_prime_number2 - identify a prime number
 * @i: the number
 * @j: number from 2 upto a
 * Return: 1 and 0
 */
int is_prime_number2(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	return (is_prime_number2(i, j + 1));
}

/**
 * is_prime_number - identify a prime number
 * @n: the number
 * Return: 1 and 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime2(n, 2));
}
