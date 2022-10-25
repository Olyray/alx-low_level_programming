#include "lists.h"
#include <string.h>

/**
 * free_listint2 - frees a list
 * @head: the header of the node
 */
void free_listint2(listint_t **head)
{
	listint_t *traverse;

	while (*head)
	{
		traverse = (*head)->next;
		free(*head);
		*head = traverse;
	}
	*head = NULL;
}
