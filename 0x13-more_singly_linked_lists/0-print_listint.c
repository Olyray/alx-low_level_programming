#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the details of a node
 * @h: the header of the node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node_int;
	size_t node_count = 0;
	listint_t *temp = malloc(sizeof(listint_t));

	temp = (listint_t *)h;
	while (temp != NULL)
	{
		node_int = temp->n;
		printf("%i\n", node_int);
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
