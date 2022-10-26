#include "main.h"
#include <stdlib.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: new string
 */

char *_strcat(char *dest, char *src)
{
	char new_str[] = strcat(dest, src);

	return (new_str);
}
