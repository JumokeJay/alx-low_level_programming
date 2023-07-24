#include "main.h"
/**
 * swap_int - a function that swaps both integers
 * basically what we want is just to transfer the value of each int around
 * @a: value of the first integer
 * @b: value of the second integer
 * Return: guess we can say value of the integers lol
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
