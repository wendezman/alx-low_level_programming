#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse.
 * @s: the string to be printed in reverse.
 */

void print_rev(char *s)
{
	int n = 0;
	int length;

	length = strlen(s);

	for (n = length - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
