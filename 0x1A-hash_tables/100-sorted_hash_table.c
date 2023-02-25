#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table with elements sorted by key
 * @size: the length of the array where the elements will be stored
 * Return: pointer to the hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sorted_hash_table;
	shash_node_t **array;
	unsigned int i;

	sorted_hash_table = malloc(sizeof(shash_table_t));
	if (sorted_hash_table == NULL)
		return (NULL);

	sorted_hash_table->shead = NULL;
	sorted_hash_table->stail = NULL;
	sorted_hash_table->size = size;
	array = malloc(size * sizeof(shash_node_t));
	if (array == NULL)
	{
		free(sorted_hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = NULL;

	sorted_hash_table->array = array;

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
	shash_node_t *new;

	if (!key || value == NULL)
		return (0);

	new = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key), new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
		return (0);

	new->next = NULL;
	index = key_index((const unsigned char *)new->key, ht->size);
	if (array[index] == NULL || strcmp(array[index]->key, new->key) == 0)
		array[index] = new;
	else
		new->next = array[index], array[index] = new->next;

	shash_table_sorted_add(ht, new);
	return (1);
}

/**
 * shash_table_sorted_add - adds a new node the the linked list containing the
 * sorted contents of the hash table, in its appropriate position
 * @ht: a pointer to the hash table
 * @new: a pointer to the new node;
*/
void shash_table_sorted_add(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *current, *previous;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead = ht->stail = new;
	}
	else
	{
		current = ht->shead, previous = NULL;
		while (current != NULL && strcmp(new->key, current->key) >= 0)
			previous = current, current = current->snext;

		if (previous == NULL)
		{
			new->snext = ht->shead;
			ht->shead->sprev = new;
			ht->shead = new;
		}
		else
		{
			previous->snext = new;
			new->sprev = previous;

			if (previous == ht->stail)
			{
				new->snext = NULL;
				ht->stail = new;
			}
			else
			{
				new->snext = current;
				current->sprev = new;
			}
		}
	}
	ht->shead->sprev = ht->stail->snext = NULL;
}

/**
 * shash_table_get - retrieves the value associated with a key
 * @key: the key
 * @ht: the pointer to the hash table
 * Return: a pointer to @value, or NULL is @ke couldn't be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the contents of a hash table
 * @ht: the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	printf("{");
	for (current = ht->shead; current != NULL; current = current->snext)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current != ht->stail)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the contents of a hash table in reverse order
 * @ht: the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = ht->stail;

	printf("{");
	for (current = ht->stail; current != NULL; current = current->sprev)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current != ht->shead)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes the hash table and its contents by freeing the
 * memory dynamically allocated for the hash table
 * 
 * @ht: a pointer to the hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *previous, *current;

	current = ht->shead;
	previous = NULL;
	while (current != NULL)
	{
		previous = current;
		current = current->snext;
		free(previous->key);
		free(previous->value);
		free(previous);
	}
	free(ht->array);
	free(ht);
}
