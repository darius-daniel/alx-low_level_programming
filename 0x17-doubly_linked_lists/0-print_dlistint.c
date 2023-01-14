#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the dlistint_t list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t numberOfNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numberOfNodes++;
	}

	return (numberOfNodes);
}
