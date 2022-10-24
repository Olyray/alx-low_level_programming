#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints the details of a node
 * @h: the header of the node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;
	listint_t *temp = malloc(sizeof(listint_t));

	temp = (listint_t *)h;
	while (temp != NULL)
	{
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
