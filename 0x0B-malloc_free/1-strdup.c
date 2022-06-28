#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: the string
 * Return: pointer to string or NULL
 */

char *_strdup(char *str)
{
	int n;
	char *string;

	if (str == NULL)
	{
		return (NULL);
	}

	for (n = 0; str[n]; n++)
	{
		;
		n++;
	}

	string = malloc(sizeof(char) * n);

	if (string == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		string[n] = str[n];
	}
	string[n] = '\0';
									return (string);
}
