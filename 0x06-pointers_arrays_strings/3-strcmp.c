#include "main.h"
#include <string.h"

/**
* _strcmp - compares two strings
* @s1: the first string
* @s2: the second string
* Return: integer comparison
*/

int _strcmp(char *s1, char *s2);
{
	int i = 0;
	int j;
	int m;

	for (j = 0; j == i; j++)
		if (s1[i] != '\0' && s2 [j] != '\0')
		{
			m = s1[i] - s2[j];
			i++;
		}
	return (m);
}
