#include "main.h"
#include <ctype.h>

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (isalpha(s[i]) && (s[i] <= 'm' || s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
		}
		else if (isalpha(s[i]) && (s[i] >= 'n' || s[i] >= 'N'))
		{
			s[i] = s[i] - 13;
		}
		i++;
	}
	return (s);
}
