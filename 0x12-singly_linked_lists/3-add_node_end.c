#include "lists.h"
#include <string.h>

/**
 * add_node_end - prints the details of a node
 * @head: the header of the node
 * @str: the string to be added
 * Return: the pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *traverse;

	/*create temp node and malloc it*/
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	traverse = malloc(sizeof(list_t));
	if (traverse == NULL)
		return (NULL);
	/*head->str = str*/
	new->str = strdup((char *)str);
	/*head->len = strlen(str)*/
	new->len = strlen(str);
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
