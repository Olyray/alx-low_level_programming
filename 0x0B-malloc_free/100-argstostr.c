#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenate the argument vectors
 * @ac: the argument count
 * @av: thr argument vectors
 * Return: the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *convec;
	int vector_len = 0, i;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		vector_len += strlen(av[i]);
		vector_len++;
	}
	convec = malloc(sizeof(convec) * vector_len);
	for (i = 0; i < ac; i++)
	{
		strcat(convec, av[i]);
		strcat(convec, "\n");
	}
	return (convec);
}
