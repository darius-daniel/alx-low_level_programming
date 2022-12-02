#include "lists.h"

int check_cycle(listint_t *head, int num);

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head node of the list
 * Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *curr = head, *rec_head = NULL, *new;

	while (curr)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		node_count++;
		if (check_cycle(rec_head, curr->n) == 0)
		{
			new = curr;
			new->next = rec_head;
			rec_head = new;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)curr->next, curr->next->n);
			break;
		}
		curr = curr->next;
	}

	return (node_count);
}

/**
 * check_cycle - finds a cycle in a linked list
 * @head: head of the of the record of unique elements in the linked list
 * @num: this function will check if this value is already part of the linked list
 * Return: 1 if already in the linked list, 0 if not  
*/
int check_cycle(listint_t *head, int num)
{
	while (head)
	{
		if (head->n == num)
			return (1);
		head = head->next;
	}
	return (0);
}
