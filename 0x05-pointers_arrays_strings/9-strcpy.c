#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to to the buffer.
 * @dest: buffer pointer.
 * @src: string pointer.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
