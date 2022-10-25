#include "lists.h"
#include <string.h>

/**
 * sum_listint - gets the sum of the data section of a linked list
 * @head: the header of the list
 * Return: the sum of the data
 */
int sum_listint(listint_t *head)
{
	listint_t *traverse;
	int data_sum = 0;

	traverse = head;
	while (traverse != NULL)
	{
		data_sum += traverse->n;
		traverse = traverse->next;
	}
	return (data_sum);
}
