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

	return (i);
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
	int i, j;

	if (n > _strlen(s2))
		n = _strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	newStr = (char *) malloc(sizeof(char) * _strlen(s1) + n);
	if (newStr == NULL)
	{
		free(newStr);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		newStr[i] = s1[i];
	}

	for (j = 0; j < (int)n; j++)
	{
		newStr[i] = s2[j];
		i++;
	}
	newStr[i] = '\0';
	return (newStr);
}
