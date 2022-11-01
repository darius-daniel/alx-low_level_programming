#include "main.h"
#include <stdio.h>

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
				bool = 1;
				break;
			}
			else
				bool = 0;
			j++;
		}
		if (bool)
			i++;
		else
			break;
	}
	return (i);
}

int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
