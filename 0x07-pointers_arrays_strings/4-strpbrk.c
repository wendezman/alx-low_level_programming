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

	while (s[n] != '\0')
	{
		while (accept[m] != '\0')
		{
			if (s[n] == accept[m])
			{
				goto last;
			}
			m++;
		}
		n++;
	}
last: return (s[n] != '\0' ? (s + n) : '\0');
}
