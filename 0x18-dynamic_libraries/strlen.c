#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: returns the the length of the string
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
