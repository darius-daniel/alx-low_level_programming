#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alloctates memory using malloc
 *
 * @b: number of spaces to be allocated
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *memAlloc;

	memAlloc = malloc(b);
	if (memAlloc == NULL)
		exit(98);

	return (memAlloc);
}
