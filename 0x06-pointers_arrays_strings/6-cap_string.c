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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 123 && str[i] > 96)
		{
			m = 0;

			for (l = 0; m == 0 && l <= 12; l++)
			{
				if (str[i] == n[l])
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
