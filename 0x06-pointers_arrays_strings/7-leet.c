#include "main.h"
/**
 * leet - encodes a string into 1337 by converting certain letters to numbers
 * @s: string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	char lower[5] = {'a', 'e', 'o', 't', 'l'};
	char upper[5] = {'A', 'E', 'O', 'T', 'L'};
	char nums[5] = {52, 51, 48, 55, 49};
	int i, j;

	i = j = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
			{
				s[i] = nums[j];
			}
		}
		i++;
	}
	return (s);
}
