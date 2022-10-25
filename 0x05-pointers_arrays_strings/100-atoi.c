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
	int i = 0;

	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-' && (s[i+1] >= '0' && s[i+1] <= '9'))
		{
			continue;
		}
		else if (s[i] == '-')
		{
			num = -(num);
		}
		i++;
	}

	return (num);
}
