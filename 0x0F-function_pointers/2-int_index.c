#include "function_pointers.h"
#include <stdio.h>
/*
 * int_index - return the indes place if trur, else -1
 * @array: the array
 * @size: the size of the array
 * @cmp: the pointer to the function of one of the three in main
 * Return: void
 */

int is_even(int num)
{
	return (num % 2 == 0);
}

int is_negative(int num)
{
	return (num < 0);
}

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
{
	return (-1);
}
	for (int i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
{
	return (i);
}
}
	return (-1);
}
