#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to be located
 * Return: a pointer to the first occurrence of the characer c
 */

char *_strchr(char *s, char c)
{
	unsigned int m = 0;

	while (s[m] != '\0')
	{
		if (s[m] == c)
		{
			break;
		}
		m++;
	}
	return (s[m] == c ? (s + m) : '\0');
}
