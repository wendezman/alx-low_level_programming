#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number to be printed
 */

void print_number(int n)
{
	unsigned int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while ((n / i) >= 10)
			i = i * 10;

		while (i > 0)
		{
			_putchar((n / i) + '0');
			n %= i;
			i /= 10;
		}
	}
}
