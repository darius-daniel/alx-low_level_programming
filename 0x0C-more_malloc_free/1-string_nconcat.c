#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of the string
 * @s: the string
 * Return: the length of the string
*/
unsigned int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		;

	return (i++);
}

/**
 * string_nconcat - concats two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from start of s2
 * Return: pointer to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int i, j, newStrLen;

	if (n > _strlen(s2))
		n = _strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	newStrLen = _strlen(s1) + n;
	newStr = (char *) malloc((sizeof(char) * newStrLen) * 2);
	if (newStr == NULL)
	{
		free(newStr);
		return (NULL);
	}

	j = 0;
	for (i = 0; i < newStrLen; i++)
	{
		if (i < _strlen(s1))
			newStr[i] = s1[i];
		else
		{
			newStr[i] = s2[j];
			j++;
		}
	}
	newStr[i] = '\0';
	return (newStr);
}
