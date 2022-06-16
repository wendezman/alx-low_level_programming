#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: integer comparison
 */

int _strcmp(char *s1, char *s2)
{
	int m = 0;
	int comp = 0;

	if (s1[m] != '\0' && s2[m] != '\0' && comp == 0)
	{
		comp = s1[m] - s2[m];
		m++;
	}
	return (comp);
}
