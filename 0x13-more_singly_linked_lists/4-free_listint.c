#include "lists.h"

/**
 * free_listint - frees the memory occupied by a linked list
 *
 * @head: pointer to the head of the list
 *
 * Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *prev;

	while (head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
