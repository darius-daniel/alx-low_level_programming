#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 *
 * @head: pointer to the head of the list.
 * Return: the data of the deleted node.
*/
int pop_listint(listint_t **head)
{
	listint_t *prev, *new_head;
	int data;

	if (!*head)
		return (0);

	prev = *head;
	data = prev->n;
	new_head = prev->next;
	free(prev);

	*head = new_head;
	return (data);
}
