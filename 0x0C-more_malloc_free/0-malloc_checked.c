#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - the function that allocates the memory
 * @b: the integer to be assigned
 * Return: the result
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
	fprintf(stderr, "Memory allocation failed\n");
	exit(98);
	}
	return (ptr);
}
