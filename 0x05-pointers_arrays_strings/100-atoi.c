#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted.
 * Return: the integer.
 */

int _atoi(char *s)
{
	unsigned int integer = 0;
	int sign = 1, m = 0;

	while (s[m] <= '9' && (s[m] >= '0' && s[m] != '\0'))
	{
		integer = (integer * 10) + (s[m] - '0');
		m++;
	}
	while (!(s[m] <= '9' && s[m] >= '0') && s[m] != '\0')
	{
		if (s[m] == '-')
			sign *= -1;
		m++;
	}
	integer *=sign;
	return (integer);
}
