#include "lists.h"
#include <string.h>

/**
 * insert_nodeint_at_index - inserts node at an index
 * @head: the header of the list
 * @idx: the index in question
 * @n: the integer of the node.
 * Return: the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *traverse;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	traverse = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (traverse)
			traverse = traverse->next;
		else
			return (NULL);
	}
	new_node->n = n;
	new_node->next = traverse->next;
	traverse->next = new_node;
	return (new_node);
}
