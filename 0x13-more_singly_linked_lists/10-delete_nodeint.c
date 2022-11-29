#include "lists.h"

unsigned int get_size(listint_t *head);

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to the head node of the list
 * @index: position of the element to be deleted
 * Return: 1 if success, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current = *head;
	unsigned int i = 0;

	if (!*head || index > get_size(*head) - 1)
		return (-1);

	if (get_size(*head) == 1)
	{
		*head = NULL;
	}
	else if (get_size(*head) > 1)
	{
		if (index == 0)
		{
			prev = current;
			*head = current->next;
			free(prev);
		}
		else
		{
			while (i != index)
			{
				prev = current;
				current = current->next;
				i++;
			}
			prev->next = current->next;
			free(current);
		}
	}
	return (1);
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
