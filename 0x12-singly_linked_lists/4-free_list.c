#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: first node in the list
 * Return: Nothing
*/
void free_list(list_t *head)
{
	list_t *prev_node, *current_node = head;

	while (current_node)
	{
		prev_node = current_node;
		current_node = current_node->next;
		free(prev_node->str);
		free(prev_node);
	}
}
