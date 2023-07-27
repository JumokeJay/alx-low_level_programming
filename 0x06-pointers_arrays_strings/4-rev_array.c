#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function to reverse array
 * @a: the array to reverse
 * @n: the number of elements inside
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;

	while (left < right)
{

	int temp = a[left];
	a[left] = a[right];
	a[right] = temp;

	left++;
	right--;
}
}
