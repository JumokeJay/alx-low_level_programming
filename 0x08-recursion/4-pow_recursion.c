#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - the function for the mathematical expression of power
 * @x: first integer
 * @x: second integer
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
