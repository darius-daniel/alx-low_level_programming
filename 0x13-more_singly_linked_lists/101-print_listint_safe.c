#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head node of the list
 * Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;

	if (!head)
		exit(98);
	else
	{
		while (current != NULL)
		{
			printf("[0x%p] %d\n", (void *)&current->n, current->n);
			current = current->next;
			node_count++;
		}
	}
	return (node_count);
}
