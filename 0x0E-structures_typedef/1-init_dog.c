#include "dog.h"

/**
 * init_dog - initializes a dog struct with info
 * @a: pointer to the struct
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to age of owner
 * Return: void
 */

void init_dog(struct dog *a, char *name, float age, char *owner)
{
	if (a == NULL)
	return;
	a->name = name;
	a->age = age;
	a->owner = owner;
}
