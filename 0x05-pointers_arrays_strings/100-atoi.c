#include "main.h"
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: return the resulting integer
 */

int _atoi(char *s)
{
	int num = atoi(s);
	int count = 0;
	int i;

	for (i = 0; s[i] >= '0' || s[i] <= '9'; i++)
	{
		if (s[i] == '-')
			count++;
	}

	for (i = 1; i < count; i++)
	{
		num = -(num);
	}
	return (num);
}
