#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: pointer to the head of the linked list
 * @n: value of the new node
 *
 * Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
