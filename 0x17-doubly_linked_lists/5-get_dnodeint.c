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
 * get_dnodeint_at_index - get the node at a particular index
 * @head: the head of the linked list
 * @index: the index of the node we want to get
 * Return: the node we have gotten
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_len, node_count = 0;
	dlistint_t *traverse;

	node_len = len_of_node(head);
	if (index > node_len)
		return (NULL);
	traverse = head;
	while (node_count != index)
	{
		traverse = traverse->next;
		node_count++;
	}
	return (traverse);
}
