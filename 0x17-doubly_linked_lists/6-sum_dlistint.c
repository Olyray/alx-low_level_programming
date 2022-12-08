#include "lists.h"

/**
 * sum_dlistint - the sum of all the data of a doubly linked list
 * @head: the header to the linked list
 * Return: the sum total
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *traverse;
	int total = 0;

	if (head == NULL)
		return (0);
	traverse = head;
	while (traverse != NULL)
	{
		total += traverse->n;
		traverse = traverse->next;
	}
	return (total);
}
