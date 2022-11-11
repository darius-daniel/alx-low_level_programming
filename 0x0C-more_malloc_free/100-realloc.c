#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to a memory block previously allocated
 * @old_size: size of ptr
 * @new_size: size in bytes of the new memory block
 * Return: pointer to the newly allocated memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);
	
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}