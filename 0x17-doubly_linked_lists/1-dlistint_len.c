#include "lists.h"

/**
 * print_dlistint - prints the elements of a linked list
 * @h: the header to the linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node_count = 0;
	const dlistint_t *traverse;

	traverse = h;
	while (traverse != NULL)
	{
		traverse = traverse->next;
		node_count++;
	}
	return (node_count);
}
