#include "main.h"
#include <stdio.h>
/**
 * factorial - the function to do the mathematical expression
 * @n: the paramater for number
 * Return: the result
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
