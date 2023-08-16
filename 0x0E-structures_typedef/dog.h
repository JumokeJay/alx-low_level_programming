#ifndef _dog_h_
#define _dog_h_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure for dog info
 * @name: Dog's name
 * @age: age of dog
 * @owner: name of owner
 * Description: This structure contains information regarding dogs
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}

dog;

typedef struct dog dog_t;

char *_strdup(char *str);

void init_dog(struct dog *a, char *name, float age, char *owner);

void print_dog(struct dog *a);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *a);

#endif
