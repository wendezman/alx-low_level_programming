#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @dest: the string on which another string is to be appended.
 * @src: the string to be appended.
 * Return: a pointer to the concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int m = 0;

	strcat(dest, src);

	while (dest[m] != '\0')
		m++;

	dest[m] = '\0';

	return (dest);
}
