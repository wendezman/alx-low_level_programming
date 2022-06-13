#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string of which every other character is to be printed
 */

void puts2(char *str)
{
	int n, length;

	length = strlen(str);

	for (n = 0; n <= (length / 2); n++)
	{
		_putchar(str[2 * n]);
	}
	_putchar('\n');
}
