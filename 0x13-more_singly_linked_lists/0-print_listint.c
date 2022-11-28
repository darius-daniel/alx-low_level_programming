#include "lists.h"

/**
 * print_listint - prints the elements of listint_t list.
 * @h: pointer the header of the list
 * Return: number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
