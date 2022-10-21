#include "lists.h"

/**
 * list_len - prints the details of a node
 * @h: the header of the node
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;
	list_t *temp = malloc(sizeof(list_t));

	temp = (list_t *)h;
	while (temp != NULL)
	{
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
