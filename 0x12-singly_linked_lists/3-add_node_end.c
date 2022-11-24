#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list_t list.
 * @head: pointer to the first node in the linked list.
 * @str: string - (malloc'd string)
 * Return: pointer to the new element, or NULL if failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;

	temp_node = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (temp_node == NULL)
		*head = new_node;
	else
	{
		while (temp_node->next)
			temp_node = temp_node->next;
		temp_node->next = new_node;
	}
	return (*head);
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
