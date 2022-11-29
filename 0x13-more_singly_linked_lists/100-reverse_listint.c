#include "lists.h"

/**
 * reverse_listint - reverses the order of the contents of a list
 * @head: pointer to head node of the linked list
 * Return: pointer to the head of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	while ((*head))
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;
	return (*head);
}
