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
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 *
 * @head: first node of the dlistint_t linked list
 * @index: index of the node, starting from 0
 *
 * Return: the nth node of a dlistint_t linked list, or NULL if the
 * node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currentNode;

	if (index > get_dlistint_len(head))
		return (NULL);

	currentNode = head;
	while (index > 0)
	{
		currentNode = currentNode->next;
		index--;
	}

	return (currentNode);
}
