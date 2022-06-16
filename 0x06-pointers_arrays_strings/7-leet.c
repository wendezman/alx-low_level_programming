#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 * Return: the string after being encoded
 */

char *leet(char *s)
{
	int m = 0;
	int n = 0;

	char c1337[] = {'4', '3', '1', '0', '7'};
	char Upper[] = {'A', 'E', 'L', 'O', 'T'};
	char Lower[] = {'a', 'e', 'l', 'o', 't'};

	for (m = 0; s[m] != '\0'; m++)
	{
		while (n < 5)
		{
			if (s[m] == Upper[n] || s[m] == Lower[n])
			{
				s[m] = c1337[n];
			}
			n++;
		}
	}
	return (s);
}
