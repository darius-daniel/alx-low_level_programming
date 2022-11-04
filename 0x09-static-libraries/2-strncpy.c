#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination array
 * @src: source string or char array
 * @n: number of characters to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
