#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		int m, n;

		for (n = 1; n <= size; n++)
		{
			for (m = n; m < size; m++)
			{
				_putchar(32);
			}
			for (m = 1; m <= n; m++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
