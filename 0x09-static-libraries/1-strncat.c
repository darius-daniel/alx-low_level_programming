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
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
