#include "lists.h"


/**
 * add_dnodeint_end - adds a node at the end of a dlistint_t list
 * @head: pointer to the head of the dlistint_t list
 * @n: an integer
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current, *previousNode;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		previousNode = NULL;
		while (current != NULL)
		{
			previousNode = current;
			current = current->next;
		}
		previousNode->next = new;
		new->prev = previousNode;
	}
	return (new);
}
