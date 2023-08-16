#include "dog.h"

/**
 * free_dog - frees a dog
 * @a: pointer to dog
 * Return: void
 */

void free_dog(dog_t *a)
{
	if (a == NULL)
	return;
	free(a->owner);
	free(a->name);
	free(a);
}
