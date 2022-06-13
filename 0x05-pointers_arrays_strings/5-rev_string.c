#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string.
 * @s: the string to be reversed.
 */

void rev_string(char *s)
{
	int m, n, length;
	char s1, s2;

	m = 0;
	length = strlen(s);

	for (n = length - 1; n > m; n--)
	{
		s1 = s[n];
		s2 = s[m];
		s[n] = s2;
		s[m] = s1;
		m++;
	}
