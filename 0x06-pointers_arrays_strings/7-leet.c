#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 * Return: the string after being encoded
 */

char *leet(char *str)
{
	int m = 0;
	int n = 0;

	char c1337[] = {'4', '3', '1', '0', '7'};
	char Upper[] = {'A', 'E', 'L', 'O', 'T'};
	char Lower[] = {'a', 'e', 'l', 'o', 't'};

	for (m = 0; str[m] != '\0'; m++)
	{
		while (n < 5)
		{
			if ((str[m] == Upper[n]) || (str[m] == Lower[n]))
				str[m] = c1337[n];
			n++;
		}
	}
	return (str);
}
