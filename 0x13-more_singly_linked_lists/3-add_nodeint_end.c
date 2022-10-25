#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - prints the details of a node
 * @head: the header of the node
 * @n: the string to be added
 * Return: the pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *traverse;

	/*create temp node and malloc it*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	traverse = malloc(sizeof(listint_t));
	if (traverse == NULL)
		return (NULL);
	/*head->str = str*/
	new->n = n;
	/*head->len = strlen(str)*/
	new->next = NULL;
	/*temp node = head*/
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = new;
	}
	return (new);
}
