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

	char c1337[] = {'4', '3', '0', '7', '1'};
	char Upper[] = {'A', 'E', 'O', 'T', 'L'};
	char Lower[] = {'a', 'e', 'o', 't', 'l'};
	
	while (str[m] != '\0')
	{
		while (n < 5)
		{
			if (str[m] == Upper[n] || str[m] == Lower[n])
				{
					str[m] = c1337[n]
				}
			n++;
		}
		m++;
	}
	return (str);
}
