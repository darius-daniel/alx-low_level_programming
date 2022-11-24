#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first node in the list
 * @str: string - (malloc'd string)
 * Return: address of the new element;
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return(NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * _strlen - computes the number of characters are in a string (excluding '\0')
 * @str: pointer to the string
 * Return: number of char in the string
*/

size_t _strlen(const char *str)
{
	unsigned int char_count = 0;

	while (*str)
	{
		char_count++;
		str++;
	}
	return (char_count);
}
