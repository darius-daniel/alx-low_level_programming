#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table with elements sorted by key
 * @size: the length of the array where the elements will be stored
 * Return: pointer to the hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sorted_hash_table;

	sorted_hash_table = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (sorted_hash_table == NULL)
		return (NULL);

	sorted_hash_table->shead = NULL;
	sorted_hash_table->stail = NULL;
	sorted_hash_table->size = size;
	sorted_hash_table->array = (shash_node_t **)
								calloc(size, sizeof(shash_node_t));
	if (sorted_hash_table->array == NULL)
	{
		free(sorted_hash_table);
		return (NULL);
	}

	return (sorted_hash_table);
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: the hash table to be added to or updated
 * @key: the key. It cannot be an empty string
 * @value: value is the value associated with the key, must be duplicated and
 * cannot be an empty string
 *
 * Return: if 0 if failed, 1 if successful
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t **array = ht->array;
	shash_node_t *new, *previous, *current;

	new = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (key[0] == '\0' || key == NULL || new == NULL)
		return (0);

	new->key = strdup(key), new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
		return (0);

	new->next = NULL;
	index = key_index((const unsigned char *)new->key, ht->size);
	if (array[index] == NULL)
		array[index] = new;
	else
		new->next = array[index], array[index] = new->next;

	if (ht->shead == NULL && ht->stail == NULL)
		ht->shead = new, ht->stail = new;
	else
	{
		current = ht->shead, previous = NULL;
		while (current != NULL && strcmp(current->key, new->key) > 0)
			previous = current, current = current->snext;
		if (previous == ht->stail)
		{
			previous->snext = new, new->snext = NULL;
			new->sprev = previous, ht->stail = new;
		}
		else
		{
			previous->snext = new;
			new->sprev = previous;
			new->snext = current;
			current->sprev = previous;
		}
	}
	return (1);
}

/**
 * shash_table_get - retrieves the value associated with a key
 * @key: the key
 * @ht: the pointer to the hash table
 * Return: a pointer to @value, or NULL is @ke couldn't be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current, **array;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	array = ht->array;
	current = array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

/**
 * hash_table_print - prints the contents of a hash table
 * @ht: the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = ht->shead;

	while(current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current != ht->stail)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}

/**
 * hash_table_print_rev - prints the contents of a hash table in reverse order
 * @ht: the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = ht->stail;

	while(current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current != ht->shead)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}
