#include "main.h0"
#include <stdio.h>
/**
 * print_diagsums - the function to print the sum
 * @a: the diagonal
 * @size: size of the matrix
 * Return: the result
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < size; i++)
	{
	sum1 += a[i * size + i];
	sum2 += a[i * size + (size - 1 - i)];
}

	printf("Sum of the main diagonal: %d\n", sum1);
	printf("Sum of the secondary diagonal: %d\n", sum2);
}
