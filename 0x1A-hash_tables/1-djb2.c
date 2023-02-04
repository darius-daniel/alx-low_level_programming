#include "hash_tables.h"

/**
 * hash_djb2 - implements the djb2 algorithm.
 * @str: the value to be hashed.
 * Return: the key to the hashed value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	for (c = 0; str[c] != '\0'; c++)
		hash = (hash * 33) + (int)str[c];

	return (hash);
}
