#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string s
 * @c: character
 * Return: pointer to first occurence of c, or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		i++;
	}
	return (NULL);
}
