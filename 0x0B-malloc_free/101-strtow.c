#include "main.h"
#include <stdlib.h>
#include <string.h>

int countWords(char *s);

char getWord(char *s, int* idx);

/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: a pointer to an array of strings
*/

char **strtow(char *str)
{
	char *arrOfChars;
	int i, j, k;

	if (str == NULL || str == "")
		return (NULL);

	arrOfChars = (char *) malloc(sizeof(char) * countWords(str));

	if (arrOfChars == NULL)
		return (NULL);

	for (i = 0; i < countWords(str); i++)
	{

	}
}

/**
 * countWords - counts the words in the string
 * @s: the string
 * Return: number of words in the string
*/

int countWords(char *s)
{
	int i, wc, lenS;
	int *

	lenS = strlen(s);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ' && (s[i+1] == ' ' || s[i+1] == '\0'))
			wc++;
	}

	return (wc);
}

/**
 * getWord - cuts out the word in the string
 * @s: the string
 * @idx: index to start cutting from
 * Return: the word cut out;
*/

char getWord(char *s, int idx)
{
	
}