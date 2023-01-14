#include "lists.h"

/**
 * sum_dlistint - computes the sum of all the data (n) of a dlistint_t
 * linked list
 * @head: first node in the dlistint_t linked list
 * Return: sum of all the data of the linked list, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
