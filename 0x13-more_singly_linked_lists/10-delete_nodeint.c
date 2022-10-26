#include "lists.h"
#include <string.h>

/**
 * delete_nodeint_at_index - deletes node at an index
 * @head: the header of the list
 * @index: the index in question
 * Return: 1 if successful, -1 if not.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node;
	listint_t *current_node;
	unsigned int i;

	previous_node = *head;
	current_node = previous_node;
	if (index == 0)
	{
		if (*head)
		{
			*head = current_node->next;
			free(current_node);
			current_node = NULL;
			return (1);
		}
		else
			return (-1);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			previous_node = current_node;
			if (previous_node)
				current_node = previous_node->next;
			else
				return (-1);
		}
		previous_node->next = current_node->next;
		free(current_node);
		return (1);
	}

}
