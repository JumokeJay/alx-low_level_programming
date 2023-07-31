#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - the function to print the sum
 * @a: the diagonal
 * @size: size of the matrix
 * Return: the result
 */

void print_diagsums(int *a, int size)
{
	int x = 0, y = 0;
	int i;

	for (i = 0; i < (size * size); i = (i + size + 1))
		x = x + a[i];
	for (i = size - 1; i < (size * size - 1); i = (i + size - 1))
		y = y + a[i];
	printf("%d, %d\n", x, y);
}
