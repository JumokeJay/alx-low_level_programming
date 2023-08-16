#include <stdio.h>
#include "main.h"
/*
 * struct dog - the element to be defined
 * @myDog: the pointer to the dog information
 * @name: the pointer to the name of th dog
 * @age: the age of the owner
 * @owner: the details about the owner
 * Return: void
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int main()
{
	struct dog myDog;

	myDog.name = "Buddy";
	myDog.age = 3.5;
	myDog.owner = "John";

	printf("Name: %s\n", myDog.name);
	printf("Age: %.1f\n", myDog.age);
	printf("Owner: %s\n", myDog.owner);
	return (0);
}
