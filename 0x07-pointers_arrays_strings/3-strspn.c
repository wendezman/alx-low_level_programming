#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: characters of prefix substring
 * Return: the number of bytes from initial segment of the string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, m;
	unsigned int test_length = 0, prefix_length = 0;

	while (accept[test_length] != '\0')
	{
		test_length++;
	}
	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; m < test_length; m++)
		{
			if (s[n] == accept[m])
			{
				prefix_length++;
				m = test_length;
			}
			else
			{
				if (m == test_length - 1)
				{
					goto last;
				}
			}
		}
	}
last: return (prefix_length);
}
