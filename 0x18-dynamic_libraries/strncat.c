#include "main.h"

/**
 * _strncat - concatenates the first n character of src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters from src to be concatenated to dest.
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
