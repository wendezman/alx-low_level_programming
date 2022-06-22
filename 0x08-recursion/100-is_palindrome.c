#include "main.h"

/**
 * str_length - calculates the length of a string
 * @c: the string
 * @length: string length
 * Return: 1 and 0
 */

int str_length(char *c, int length)
{
	if (*c == 0)
	{
		return (length - 1);
	}
	return (str_length(c + 1, length + 1));
}

/**
 * str_cmp - compares string vs string reverse
 * @c: the string
 * @length: string length
 * Return: 1 and 0
 */

int str_cmp(char *c, int length)
{
	if (*c != *(c + length))
	{
		return (0);
	}
	else if (*c == 0)
	{
		return (1);
	}
	return (str_cmp(c + 1, length - 2));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 1 and 0
 */

int is_palindrome(char *s)
{
	int length;

	length = str_length(s, 0);
	return (str_cmp(s, length));
}
