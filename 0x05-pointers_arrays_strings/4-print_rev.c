#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse.
 * @s: the string to be printed in reverse.
 */

void print_rev(char *s)
{
	_putchar(strrev(s));
	_putchar('\n');
}
