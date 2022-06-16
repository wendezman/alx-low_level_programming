#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 * Return: the encoded string
 */

char *rot13(char *str)
{
	int m = 0, n = 0;
	char r13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char Letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

		while (str[m] != '\0')
		{
			for (n = 0; n < 52; n++)
			{
				if (str[m] == Letters[n])
					str[m] = r13[n];
			}
			m++;
		}

	return (str);
}
