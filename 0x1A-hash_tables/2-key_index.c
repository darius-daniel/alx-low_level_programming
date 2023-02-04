#include "hash_tables.h"

/**
 * key_index - computes the index of a key in the from the output of djb2
 * function
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
