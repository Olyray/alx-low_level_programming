#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - mallocs a pointer
 * @b: the size of the malloc.
 * Return: the pointer
 */

void *malloc_checked(unsigned int b)
{
	int *malloced;

	malloced = malloc(b);
	return (malloced);
}
