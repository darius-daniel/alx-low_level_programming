#include "lists.h"

/**
 * listint_len - computes the number of elements in a linked list
 * @h: pointer to the header of the linked list
 * Return: number of elements in the linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
