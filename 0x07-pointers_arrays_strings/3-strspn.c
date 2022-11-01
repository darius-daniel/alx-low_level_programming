#include "main.h"

/**
 * _strspn - gets the lenth of a prefix substring
 * @s: initial segment of s
 * @accept: number of accepted bytes
 * Return: number of bytes in s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				bool = 0;
				break;
			}
			else
				bool = 1;
			j++;
		}
		if (bool == 1)
			break;
		i++;
	}
	return(i);
}
