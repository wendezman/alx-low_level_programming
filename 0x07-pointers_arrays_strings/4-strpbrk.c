#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: string of characters to be matched
 * Return: pointer to matching character
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int n = 0;
	unsigned int m = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[n] == accept[m])
			{
				goto last;
			}
		}
	}
last: return (s[n] != '\0' ? s + n : '\0');
}
