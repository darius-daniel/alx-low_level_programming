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
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list
 * @head: first node int the linked list
 * @index: index of the node to be deleted
 * Return: 1 if successfull, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prevNode;
	unsigned int counter;

	if (index > get_dlistint_len(*head) - 1 || *head == NULL)
		return (-1);

	if (get_dlistint_len(*head) == 1)
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	current = *head;
	prevNode = NULL;
	for (counter = 0; counter < index; counter++)
	{
		prevNode = current;
		current = current->next;
	}

	if (prevNode == NULL)
	{
		current = current->next;
		free(current->prev);
		current->prev = NULL;
		*head = current;
	}
	else if (current == NULL)
	{
		free(prevNode->next);
		prevNode->next = NULL;
	}
	else
	{
		free(prevNode->next);
		prevNode->next = current->next;
		current->next->prev = prevNode;
	}
	return (1);
}
