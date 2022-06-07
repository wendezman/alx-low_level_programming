#include "main.h"

/**
 * print_sign - Shows the sign of a given number
 * @n: The number to be checked
 *
 * Return: -1 for Negative number, 0 for zero and 1 for positive number
 */
int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
