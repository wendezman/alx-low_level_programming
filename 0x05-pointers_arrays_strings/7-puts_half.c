#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string.
 * @str: the string in which half of it is to be printed.
 */

void puts_half(char *str)
{
	int n, m, length;

	length = strlen(str);
	n = (length - 1) / 2;

	for (m = n + 1; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
