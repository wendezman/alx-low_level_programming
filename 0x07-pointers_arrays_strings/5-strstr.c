#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to locate the substring in
 * @needle: the substring to be located
 * Return: pointer to the begginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int m;

	while (*haystack != '\0')
	{
		m = 0;
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
			m++;
		}
		if (*needle == '\0')
		{
			return (haystack - m);
		}
		haystack = haystack - (m - 1);
		needle = needle - m;
	}
	return ('\0');
}
