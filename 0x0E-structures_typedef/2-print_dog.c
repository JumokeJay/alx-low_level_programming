#include "dog.h"

/**
 * print_dog - prints the struct elements of a dog
 * @a: pointer to the dog
 * Return: void
 */

void print_dog(struct dog *a)
{
	if (a == NULL)
	return;
	if (a->name == NULL)
	a->name = "(nil)";
	printf("Name: %s\n", a->name);
	printf("Age: %f\n", a->age);
	if (a->owner == NULL)
	a->owner = "(nil)";
	printf("Owner: %s\n", a->owner);

}
