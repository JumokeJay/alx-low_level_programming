#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * creat_array - the function that creates the array
 * @size: the size of the array
 * @c: the parameter of the memory
 * Return: the result of the code
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
	return (NULL);
	}

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
	return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
	array[i] = c;
	}

	return (array);
}
