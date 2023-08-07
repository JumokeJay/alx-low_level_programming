#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - the function that creates the array
 * @size: the size of the array
 * @c: the parameter of the memory
 * Return: the result of the code
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}


	return (array);
}
