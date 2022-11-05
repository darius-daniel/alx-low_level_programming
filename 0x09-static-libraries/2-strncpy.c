#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: destination array
 * @src: source string or char array
 * @n: number of characters to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
