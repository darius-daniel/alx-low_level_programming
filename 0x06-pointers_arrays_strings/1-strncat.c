#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates the first n character of src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters from src to be concatenated to dest.
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
