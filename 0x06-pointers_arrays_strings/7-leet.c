#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 * Return: the string after being encoded
 */

char *leet(char *str)
{
	int m = 0, n = 0;

	char c1337[] = {'4', '3', '1', '0', '7'};
	char Upper[] = {'A', 'E', 'L', 'O', 'T'};
	char Lower[] = {'a', 'e', 'l', 'o', 't'};

	while (str[m] != '\0')
	{
		for (n = 0; n < 5; n++)
		{
			if ((str[m] == Upper[n]) || (str[m] == Lower[n]))
				str[m] = c1337[n];
		}
		m++;
	}

	return (str);
}
