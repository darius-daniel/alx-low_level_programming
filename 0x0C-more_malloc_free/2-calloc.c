#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements in the array
 * @size: number of bytes each element will be
 * Return: no return
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newBlock;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newBlock = malloc(nmemb * size);
	if (newBlock == NULL)
	{
		free(newBlock);
		return (NULL);
	}

	for (i = 0; i < (nmemb*size); ++i)
		*(newBlock + i) = (int)0;

	return (newBlock);
}
