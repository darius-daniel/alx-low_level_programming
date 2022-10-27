#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: processed string
 * Return: new string with all words capitalized
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			 '(', ')', '{', '}'};

	i = j = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
		else
		{
			for (j = 0; j < 13; j++)
			{
				if (s[i] == sep[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
		i++;
	}
	return (s);
}
