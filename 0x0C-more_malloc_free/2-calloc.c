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

	if (nmemb == 0 || size == 0)
		return (NULL);

	newBlock = (int *)malloc(nmemb * size);
	if (newBlock == NULL)
	{
		free(newBlock);
		return (NULL);
	}

	newBlock[size] = 0;

	return (newBlock);
}
