#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - the function to calculate the square of the integer
 * findsq - the function to find the square
 * @n: the first integer
 * @a: the element to countdown
 * Return: the result
 */

int _sqrt_recursion(int n)
{
	int a = 0;

	return (findsq(n, a));
}
/**
 * findsq - the function to find the square
 * @n: the first integer
 * @a: the element to countdown
 * Return: the result
 */

int findsq(int n, int a)
{
	if ((a * a) > n)
	return (-1);
	if ((a * a) == n)
	return (a);
	return (findsq(n, (a + 1)));
}
