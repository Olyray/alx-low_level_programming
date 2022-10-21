#include "lists.h"

/**
 * print_list - prints the details of a node
 * @h: the header of the node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	char *node_string;
	int string_length;
	size_t node_count = 0;
	list_t *temp = malloc(sizeof(list_t));

	temp = (list_t *)h;
	while (temp != NULL)
	{
		node_string = temp->str;
		string_length = temp->len;
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", string_length, node_string);
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
