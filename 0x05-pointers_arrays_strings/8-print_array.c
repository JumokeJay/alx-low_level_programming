#include "main.h"

/**
 * print_array - prints an array of n integer
 * @a: The array to be printed
 * @n: the number(S) to print
 *
 * Return: 0 as always
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
	printf("%d", a[c]);
	if (c < (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
