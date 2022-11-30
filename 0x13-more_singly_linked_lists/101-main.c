#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _free_listint_safe - free a list
 *
 * @list: A pointer to the first element of a list to free
 *
 * Return: NOTHING
*/
void _free_listint_safe(listint_t **list)
{
	if (*list)
	{
		_free_listint_safe((*list)->next);
		free(*list);
	}
}

/**
 * _add_node - Add a node at the beginning of a list
 *
 * @head: a pointer to the first element of a list
 * @n:  the number to store in the new node
 *
 * Return: The address of the new node
*/
listint_t *_add_node(listint_t **head, int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(*tmp));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *node1;
	listint_t *node2;
	listint_t *node3;
	listint_t *node4;
	listint_t *node5;
	size_t n;

	head = NULL;
	/* 1 -> 4 -> 3 -> 2 -> 5 -> (3) */
	node5 = _add_node(&head, 5);
	node4 = _add_node(&head, 4);
	node3 = _add_node(&head, 3);
	node2 = _add_node(&head, 2);
	node1 = _add_node(&head, 1);

	node1->next = node4;
	node4->next = node3;
	node3->next = node2;
	node2->next = node5;
	node5->next = node3;

	n = print_listint_safe(head);
	printf("%lu\n", n);
	_free_listint_safe(&head);
	return (0);
}
/*int main(void)
{
	listint_t *head;
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);
	add_nodeint(&head2, 98);
	add_nodeint(&head2, 402);
	add_nodeint(&head2, 1024);
	print_listint_safe(head2);
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	node->next = add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint_safe(head);
	return (0);
} */
