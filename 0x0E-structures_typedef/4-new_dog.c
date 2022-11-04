#include "dog.h"

/**
 * new_dog - create a new struct new dog
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);
	doggie->name = malloc(sizeof(char *));
	if (doggie->name == NULL)
		return (NULL);
	strcpy(doggie->name, name);
	doggie->age = age;
	doggie->owner = malloc(sizeof(char *));
	if (doggie->owner == NULL)
		return (NULL);
	strcpy(doggie->owner, owner);
	return (doggie);
}
