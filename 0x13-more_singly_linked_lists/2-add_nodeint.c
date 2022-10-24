#include "lists.h"
#include <string.h>

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: the header of the node
 * @n: the integer of the node
 * Return: the pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*create temp node and malloc it*/
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	/*head->str = str*/
	temp->n = n;
	/*head->len = strlen(str)*/
	/*temp node = head*/
	temp->next = *head;
	*head = temp;
	return (temp);
}
