#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, and sets head to NULL
 * @head: pointer to the head of the list
 *
 * Return: Nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *prev, *current;

	current = *head;
	while (current)
	{
		prev = current;
		current = current->next;
		free(prev);
	}
	*head = NULL;
}
