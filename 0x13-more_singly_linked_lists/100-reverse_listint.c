#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: the header of the list
 * Return: head of the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node;
	listint_t *next_node;

	previous_node = NULL;
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}
	*head = previous_node;
	previous_node = NULL;
	return (*head);
}
