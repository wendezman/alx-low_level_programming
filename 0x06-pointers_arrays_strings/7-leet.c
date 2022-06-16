#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 * Return: the string after being encoded
 */

char *leet(char *str)
{
	char c1337[] = {'4', '3', '0', '7', '1'};
	char Upper[] = {'A', 'E', 'O', 'T', 'L'};
	char Lower[] = {'a', 'e', 'o', 't', 'l'};
	int m;
	int n;

	for (m = 0; str[m] != '\0'; m++)
	{
		for (n = 0; n < 5; n++)
		{
			if (str[m] == Upper[n] || str[m] == Lower[n])
			{
				str[m] = c1337[m]
			}
		}
	}
	return (str);
}
