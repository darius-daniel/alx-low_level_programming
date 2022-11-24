#include "lists.h"

/**
 * list_len - computes the number of elements in a linked list_t list.
 * @h: the head node of the linked list_t list
 * Return: number of elements in the list
*/
size_t list_len(const list_t *h)
{
	const list_t *temp_node = h;
	size_t node_count = 0;

	while (temp_node != NULL)
	{
		temp_node = temp_node->next;
		node_count++;
	}
	return (node_count);
}
