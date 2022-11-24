#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: first node in the list
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *temp_node = h;
	size_t count_nodes = 0;

	while (temp_node != NULL)
	{
		if (temp_node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp_node->len, temp_node->str);
		temp_node = temp_node->next;
		count_nodes++;
	}
	return (count_nodes);
}
