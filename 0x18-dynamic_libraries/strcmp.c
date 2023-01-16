#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: seconnd string
 * Return: the result of the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
