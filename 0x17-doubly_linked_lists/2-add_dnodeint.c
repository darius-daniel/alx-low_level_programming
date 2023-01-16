#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head of the dlistint_t list
 * @n: an integer
 * Return: address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new;
  dlistint_t *current = *head;

  new = malloc(sizeof(dlistint_t));
  if (new == NULL)
  {
    dprintf(2, "Error: Can't malloc\n");
    return (NULL);
  }

  new->n = n;
  new->next = NULL;
  new->prev = NULL;

  if (current == NULL)
    *head = new;
  else
  {
    current->prev = new;
    new->next = current;
    *head = new;
  }

  return (new);
}
