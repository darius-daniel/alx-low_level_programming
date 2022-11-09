#include <stdlib.h>
#include "main.h"
int _strlen(char *s);

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to a newly allocated space in memory which contains the
  * contents of s1, followed by the contents of s2, and null terminated
  */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 = "";

	int len1, len2, newLen;
	char *newStr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	newStrLen = len1 + len2;
	newStr = (char *)malloc(sizeof(char) * (newLen + 1));

	if (newStr == NULL)
		return (NULL);

	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		newStr[i] = s1[i];
	for (j = 0; j <= len2; j++)
	{
		newStr[i] = s2[j];
		i++;
	}
	return (newStr);
}

/**
  * _strlen - determines the length of a string
  * @s: the string
  * Return: length of the string
  */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0')
		len++;
	return (len);
}
