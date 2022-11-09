#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates and array of chars, and initializes it with a special
 * char
 * @size: size of array
 * @c: character the array will be initialized to
 * Return: a char, or NULL if size = 0
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = (char *)malloc(sizeof(c) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
