#include "function_pointers.h"
#include <stdio.h>
/*
 * array_iterator - the function to print each array
 * @array: the array
 * @size: the number of element to print
 * @action: the pointer to print
 * Return: zero
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
	action(array[a]);
	}
}
