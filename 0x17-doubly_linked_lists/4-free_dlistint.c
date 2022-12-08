#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
