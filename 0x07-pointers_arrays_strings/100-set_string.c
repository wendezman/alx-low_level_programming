#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: a pointer to a pointer to a string
 * @to: the character
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
