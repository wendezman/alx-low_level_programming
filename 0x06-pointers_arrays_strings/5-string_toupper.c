#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be changed
 * Return: the string in uppercase
 */

char *string_toupper(char *str)
{
	toupper(str);

	return (str);
}
