#include "lists.h"

/**
 * add_dnodeint_end - add a node to the end of a linked list
 * @head: the head of the doubly linked list
 * @n: the data to be added
 * Return: the added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *traverse;

	if (*head == NULL)
	{
		add_dnodeint(&*head, n);
		return (*head);
	}
	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	traverse = *head;
	while (traverse->next != NULL)
		traverse = traverse->next;
	new_node->prev = traverse;
	traverse->next = new_node;
	return (new_node);
}

/**
 * add_dnodeint - add a new node to the doubly linked list
 * @head: the head of the node
 * @n: the data for the node
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *new_node;

        new_node = malloc(sizeof(new_node));
        if (new_node == NULL)
                return (NULL);
        new_node->n = n;
        new_node->prev = NULL;
        new_node->next = *head;
        if (*head != NULL)
                (*head)->prev = new_node;
        *head = new_node;
        return (new_node);
}
