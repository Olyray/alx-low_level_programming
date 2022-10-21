#include "lists.h"
#include <string.h>

/**
 * add_node - prints the details of a node
 * @head: the header of the node
 * @str: the string to be added
 * Return: the pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	/*create temp node and malloc it*/
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	/*head->str = str*/
	temp->str = strdup(str);
	/*head->len = strlen(str)*/
	temp->len = strlen(str);
	/*temp node = head*/
	temp->next = *head;
	*head = temp;
	return (temp);
}
