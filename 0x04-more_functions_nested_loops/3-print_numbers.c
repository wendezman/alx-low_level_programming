#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 */
void print_numbers(void)
{
	int c;
	
	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar(10);
}
