#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 * @dest: pointer to memory area
 * @src: constant byte to occupy s
 * @n: number of bytes to be filled
 * Return: pointer to the memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
