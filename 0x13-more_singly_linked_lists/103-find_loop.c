#include "lists.h"

/**
 * find_listint_loop - finds the node in a linked list where a loop starts.
 * @head: the head node of the linked list;
 * Return: address of the loop's starting node, or NULL if no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr;

	if (!head)
		return (NULL);
	
	curr = head->next;
	while (curr)
	{
		if (curr - curr->next != 0)
			head = head->next;
		else if (curr - curr->next == 0)
			return (curr);
		else if(curr == head)
			return (head);
		curr = curr->next;
	}
	return (NULL);
}
