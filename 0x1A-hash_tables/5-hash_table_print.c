#include "hash_tables.h"

/**
 * hash_table_print - prints the contents of a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array = ht->array;
	hash_node_t *current;
	char *delim;
	unsigned long int i;

	if (ht != NULL)
	{
		delim = "";
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = array[i];
			while (current != NULL)
			{
				printf("%s'%s': '%s'", delim, current->key, current->value);
				delim = ", ";
				current = current->next;
			}
		}
		printf("}\n");
	}
	else
		return;
}
