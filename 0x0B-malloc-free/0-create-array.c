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
	char *p[size];
	int i;

	if (size == 0)
		return (NULL);

	i = 0;
	while (i < size)
	{
		(p + i) = c;
		i++;
	}

	return (p);
}