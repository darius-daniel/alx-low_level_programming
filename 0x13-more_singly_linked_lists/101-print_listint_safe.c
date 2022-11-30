#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head node of the list
 * Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;
		if (head - head->next > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (node_count);
}
