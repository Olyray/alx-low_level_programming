#include "lists.h"

/**
 * len_of_node - find the length of a doubly linked list
 * @head: the head of a node
 * Return: the length of the linked list
 */
unsigned int len_of_node(dlistint_t *head)
{
	dlistint_t *traverse;
	unsigned int len = 0;

	traverse = head;
	while (traverse != NULL)
	{
		traverse = traverse->next;
		len++;
	}
	return (len);
}

/**
 * insert_dnodeint_at_index - insert a node at an index
 * @h: the head of the linked list
 * @idx: the index to be used
 * @n: the number in the data section
 * Return: the added list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *traverse, *new_node;
	unsigned int counter = 0, node_len;

	node_len = len_of_node(*h);
	if (idx > node_len)
		return (NULL);
	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	traverse = *h;
	while (counter != idx - 1)
	{
		traverse = traverse->next;
		counter++;
	}
	new_node->next = traverse->next;
	new_node->prev = traverse;
	traverse->next = new_node;
	new_node->next->prev = new_node;
	return (new_node);
}
