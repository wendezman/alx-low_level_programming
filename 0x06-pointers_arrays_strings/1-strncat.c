#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: the string on which the second string appends to.
 * @src: the string that is going to be appended.
 * @n: the number of bytes to be concatenated.
 * Return: a pointer to the concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
