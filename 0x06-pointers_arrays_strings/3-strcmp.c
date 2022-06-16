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
	int m;
	int comp = 0;

	for (m = 0; s1[m] != '\0' && s2[m] != '\0'; m++)
	{
		comp = s1[m] - s2[m];
	}

	return (comp);
}
