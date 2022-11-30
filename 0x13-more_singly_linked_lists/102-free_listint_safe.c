#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list, and sets head to NULL
 * @h: pointer to the head of the list.
 * Return: size of the freed list
*/
size_t free_listint_safe(listint_t **h)
{
	size_t node_count;
	listint_t *prev;

	while ((*h)->next)
	{
		prev = *h;
		*h = (*h)->next;
		free(prev);
		node_count++;
	}
	free(*h);
	return(node_count);
}
