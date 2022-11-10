#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	int newStrLen;
	int i, j, k;

	j = 0;
	if (n > strlen(s2))
		n = strlen(s2) + 1;
	newStrLen = strlen(s1) + n;
	newStr = (char *) malloc(sizeof(char) * newStrLen);
	for (i = 0; i <= newStrLen; i++)
	{
		if (i < strlen(s1))
		{
			newStr[i] = s1[i];
		}
		else
		{
			if (i == (strlen(s1) + (n)))
				newStr[i] = '\0';
			else
				newStr[i] = s2[j];
			j++;
		}
	}
	return (newStr);
}
