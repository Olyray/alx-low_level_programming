#include "lists.h"

/**
 * print_dlistint - prints the elements of a linked list
 * @h: the header to the linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;
	const dlistint_t *traverse;

	traverse = h;
	while (traverse != NULL)
	{
		printf("%i\n", traverse->n);
		traverse = traverse->next;
		node_count++;
	}
	return (node_count);
}
