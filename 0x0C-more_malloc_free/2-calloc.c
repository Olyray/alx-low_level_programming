#include <stdio.h>
#include <stdlib.h>


/**
 * _calloc - mallocs a pointer
 * @nmemb: the number of the element.
 * @size: the size of the element
 * Return: the pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *calloced;

	if (nmemb == 0 || size == 0)
		return (NULL);
	calloced = calloc(nmemb, size);
	if (calloced == NULL)
		return (NULL);
	return (calloced);
}
