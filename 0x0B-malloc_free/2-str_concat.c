# include "main.h"
# include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * Return: pointer to concatenated string or NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *m;
	int n = 0, o = 0, p = 0;

	if (s1 != NULL)
		for (; s1[n]; n++)
		;
	if (s2 != NULL)
		for (; s2[o]; o++)
		;

	m = malloc(sizeof(char) * (n + o + 1));

	if (m == NULL)
		return (NULL);

	while (p < n)
	{
		m[p] = s1[p];
		p++;
	}

	while (p < n + o)
	{
		m[p] = s2[p - n];
		p++;
	}
	m[p] = '\0';
	return (m);
}
