#include "main.h"
#include <string.h"

/**
* _strcmp - compares two strings
* @s1: the first string
* @s2: the second string
* Return: 0 if s1 == s2, > 0 if s1 > s2, < 0 if s1 < s2
*/

int _strcmp(char *s1, char *s2);
{
	int i = 0;
	int j;
	int m;

	for (j = 0; j == i; j++)
		if (s1[i] == s2[j])
		{
			m = _putchar(48);
		}
		elseif (s1[i] > s2[j])
		{
			m = _putchar(62, 32, 48);
		}
		else
		{
			m = _putchar(60, 32, 48);
		}
	return (m);
}
