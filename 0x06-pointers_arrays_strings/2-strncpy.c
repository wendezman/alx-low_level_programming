#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: the string on which the second string to be copied to
 * @src: the string to be copied.
 * @n: the number of bytes to be copied.
 * Return: the resulting string after copying.
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
