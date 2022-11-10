#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc and sets it to zero
 * @nmemb: number of elements in the array
 * @size: size (bytes) of each element
 * Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arrBlock;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrBlock = malloc(size * nmemb);
	if (arrBlock == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		arrBlock[i] = 0;

	return (arrBlock);
}
