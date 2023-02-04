#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key.
 * @ht: the hash table to retrieve from
 * @key: the key
 * Return: the value associated with the key, or NULL if @key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
