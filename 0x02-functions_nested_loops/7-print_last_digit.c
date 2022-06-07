#include "main.h"

/**
 * print_last_digit - prints the last digit of a given integer
 *
 * @n: The integer to be manipulated
 * Return: Returns the last digit of a number.
 */

int print_last_digit(int n)

{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = (-1 * (n % 10));
		_putchar (lastDigit + '0');
		return (lastDigit);
	}

	else
	{
		lastDigit = (n % 10);
		_putchar (lastDigit + '0');
		return (lastDigit);
	}

}
