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
 * delete_dnodeint_at_index - deletes the node at an index
 * @head: the head of the node
 * @index: the index of the node to be deleted
 * Return: 1 for success, -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete_node, *traverse;
	unsigned int link_size, traverse_count = 0;

	link_size = len_of_node(*head);
	if (*head == NULL)
		return (-1);
	if (link_size == 1)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index > link_size)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}
	else if (index == link_size)
	{
		delete_node = *head;
		while (delete_node->next != NULL)
			delete_node = delete_node->next;
		traverse = delete_node->prev;
		traverse->next = NULL;
		delete_node->prev = NULL;
		free(delete_node);
		return (1);
	}
	else
	{
		delete_node = *head;
		while (traverse_count != index)
		{
			delete_node = delete_node->next;
			traverse_count++;
		}
		delete_node->prev->next = delete_node->next;
		delete_node->next->prev = delete_node->prev;
		delete_node->next = NULL;
		delete_node->prev = NULL;
		free(delete_node);
		return (1);
	}
}
