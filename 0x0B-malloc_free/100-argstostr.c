#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);

/**
 * argstostr - concatenates all the arguments passed into the program
 * @ac: argument count
 * @av: argument vectors
 * Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, newStrLen;
	char *newStr;

	if (ac == 0 || av == NULL)
		return (NULL);

	newStrLen = 0;
	for (i = 0; i < ac; i++)
	{
		newStrLen += _strlen(av[i]);
	}

	newStr = malloc((sizeof(char) * newStrLen + 1) + 1);

	if (newStr == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			newStr[k] = av[i][j];
			k++;
		}
		newStr[k] = '\n';
		k++;
	}

	return (newStr);
}

/**
 * _strlen - calculates the length of string
 * @s: input string
 * Return: length of the string
*/
int _strlen(char *s)
{
	int strLen;

	for (strLen = 0; s[strLen] != '\0'; strLen++)
		;

	return(strLen);
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}