#include "lists.h"

/**
 * dlistint_len - computes the number of elements in a dlistint_t list
 * @h: head node of the list
 * Return: number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numberOfElements = 0;

	while (h != NULL)
	{
		numberOfElements++;
		h = h->next;
	}
	return (numberOfElements);
}
