#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table and frees the memory allocated for
 * it
 *
 * @ht: a pointer to the hash table
 *
 * Return: Always EXIT_SUCCESS
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *prev;
	hash_node_t **array = ht->array;
	size_t i;

	for (i = 0; i < ht->size; i++)
	{
		current = array[i];
		while (current != NULL)
		{
			prev = current;
			current = current->next;
			free(prev->key);
			free(prev->value);
			prev->next = NULL;
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
