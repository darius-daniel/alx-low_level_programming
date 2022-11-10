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
	int *newBlock;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newBlock = (int *)malloc(nmemb * size);
	if (newBlock == NULL)
	{
		free(newBlock);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
		newBlock[i] = 0;

	return ((void *)newBlock);
}