#include "dog.h"

/**
 * free_dog - free the dog struct
 * @d: the dog struct to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(0);
	free(d->name);
	free(d->owner);
	free(d);
}
