#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a new hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	hash_node_t **array;
	unsigned int i;

	new_hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->size = size;
	array = (hash_node_t **)malloc(size * sizeof(hash_node_t));
	if (array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}

	new_hash_table->array = array;

	for (i = 0; i < size; i++)
		array[i] = NULL;

	return (new_hash_table);
}
