#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: bytes of string two to be concatenated
 * Return: Pointer to newly allocated space or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ls1 = 0, ls2 = 0;
	unsigned int i, j;
	char *ptr;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	while (*(s1 + ls1))
		ls1++;
	while (*(s2 + ls2))
		ls2++;

	if (n < ls2)
		ls2 = n;

	ptr = malloc(sizeof(char) * (ls1 + ls2 + 1));

	if (ptr == 0)
		return (0);

	for (i = 0; i < ls1; i++)
		*(ptr + i) = *(s1 + i);

	for (i = 0, j = ls1; i < ls2; j++, i++)
		*(ptr + j) = *(s2 + i);

	*(ptr + j) = '\0';

	return (ptr);
}
