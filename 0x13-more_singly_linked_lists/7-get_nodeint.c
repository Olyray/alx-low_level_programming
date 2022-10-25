#include "lists.h"
#include <string.h>

/**
 * get_nodeint_at_index - gets node at an index
 * @head: the header of the list
 * @index: the index in question
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverse;
	unsigned int i;

	traverse = head;
	for (i = 0; i < index; i++)
	{
		if (traverse)
			traverse = traverse->next;
		else
			return (NULL);
	}
	return (traverse);
}
