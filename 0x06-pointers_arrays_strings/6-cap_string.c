#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 * Return: the capitalized string
 */

char *cap_string(char *str)
{
int i;
int l;
int m;

char n[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (str[0] < 123 && str[0] > 96)
		str[0] = str[0] - 32;

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] < 123 && str[i] > 96)
		{
			m = 0;

			for (l = 0; m == 0 && l <= 12; l++)
			{
				if (str[i - 1] == n[l])
				{
					m = 10;
				}
			}
			if (m == 10)
			{
				str[i] = str[i] - 32;
			}
		}
	}

	return (str);
}
