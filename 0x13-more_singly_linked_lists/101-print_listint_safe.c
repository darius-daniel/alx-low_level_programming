#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head node of the list
 * Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	if (!head)
		exit(98);
	else
	{
		while (head)
		{
			printf("[0x%p] %d\n", (void *)&head->next, head->n);
			node_count++;
			if (head - head->next < 0)
			{
				printf("-> [0x%p] %d\n", (void *)&head->next->next, head->next->n);
				break;
			}
			else
				head = head->next;
		}
	}
	return (node_count);
}
