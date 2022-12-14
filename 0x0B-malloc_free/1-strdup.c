#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
  * _strdup - copies a string to a newly allocated space in memory
  * @str: string to be duplicated
  * Return: pointer to a new string (a duplicate of str). If str is NULL,
  * return NULL
  */

char *_strdup(char *str)
{
	char *newStr;
	int i, lenStr;

	if (str == NULL)
		return (NULL);

	lenStr = _strlen(str);
	newStr = (char *)malloc(sizeof(char) * (lenStr + 1));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i <= lenStr; i++)
	{
		newStr[i] = str[i];
	}
	return (newStr);
}

/**
  * _strlen - calculates the length of a string
  * @s: string to be measured
  * Return: number of chars in s
  */
int _strlen(char *s)
{
	int lenS = 0;

	while (s[lenS] != '\0')
		lenS++;
	return (lenS);
}
