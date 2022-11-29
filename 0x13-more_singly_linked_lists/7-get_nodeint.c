#include "lists.h"

unsigned int get_size(listint_t *head);

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list,
 * @head: head node of the linked list
 * @index: index of the node starting at 0.
 *
 * Return: pointer to the nth node, NULL if node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	if (index > get_size(head) - 1)
		return (NULL);

	while (count != index)
	{
		current = current->next;
		count++;
	}

	return (current);
}

/**
 * get_size - computes the number of elements in the linked list
 * @head: pointer to the head node of the list
 * Return: number of elements in the list.
*/
unsigned int get_size(listint_t *head)
{
	unsigned int count_nodes = 0;

	while (head)
	{
		head = head->next;
		count_nodes++;
	}
	return (count_nodes);
}
