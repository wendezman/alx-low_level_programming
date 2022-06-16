#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be changed
 * Return: the string in uppercase
 */

char *string_toupper(char *str)
{
	int i = 0;
	char m;

	while (str[i])
	{
		m = str[i];
		toupper(m);
		i++;
	}

	return (m);
}
