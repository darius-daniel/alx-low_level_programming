#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table to be added to or updated
 * @key: the key. It cannot be an empty string
 * @value: value is the value associated with the key, must be duplicated and
 * cannot be an empty string
 *
 * Return: if 0 if failed, 1 if successful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	hash_node_t **array = ht->array;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL || key[0] == '\0' || key == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	if (node->value == NULL || node->key == NULL)
		return (0);

	node->next = NULL;
	index = key_index((const unsigned char *)node->key, ht->size);

	if (array[index] == NULL)
		ht->array[index] = node;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}
