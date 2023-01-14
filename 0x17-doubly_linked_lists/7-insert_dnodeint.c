#include "lists.h"

/**
 * get_dlistint_len - computes the number of nodes in a linked list
 * @h: first node in the linked list
 * Return: number of nodes in the linked list
 */
size_t get_dlistint_len(dlistint_t *h)
{
	size_t numberOfNodes = 0;
	dlistint_t *currentNode = h;

	while (currentNode != NULL)
	{
		numberOfNodes++;
		currentNode = currentNode->next;
	}

	return (numberOfNodes);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: starting node of the dlistint list
 * @idx: index to insert the new node
 * @n: integer contained in the new node
 * Return: address of the new node, or NULL if insertion is not possible
 */
dlistint_t
*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *prevNode, *new;
	unsigned int counter;

	if (idx > get_dlistint_len(*h))
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	new->n = n;
	new->next = new->prev = NULL;

	if (*h == NULL)
		*h = new;
	else
	{
		prevNode = NULL, current = *h;
		for (counter = 0; counter < idx; counter++)
			prevNode = current, current = current->next;

		if (prevNode == NULL)
			new->next = *h, current->prev = new, *h = new;
		else if (current == NULL)
			new->prev = prevNode, prevNode->next = new;
		else
		{
			prevNode->next = new, new->prev = prevNode;
			new->next = current, current->prev = new;
		}
	}
	return (new);
}
