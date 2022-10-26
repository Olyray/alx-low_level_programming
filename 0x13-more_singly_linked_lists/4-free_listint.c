#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the header of the node
 */
void free_listint(listint_t *head)
{
	if (head->next != NULL)
		free_listint(head->next);
	free (head);
}
