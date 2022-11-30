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

	while (*h)
	{
		prev = *h;
		node_count++;
		if (*h - (*h)->next > 0)
			*h = (*h)->next;
		else
		{
			free(prev);
			break;
		}
		free(prev);
	}
	*h = NULL;
	return(node_count);
}
