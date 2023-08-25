#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/*
 * sum_them_all - the functions that adds up all its parameters
 * @n: the parameter of the function
 * @...: the parameter of the variables to be calculated
 * Return: the result
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
	return (0);
	}

	int sum = 0;
	va_list args;
	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
	int num = va_arg(args, int);
	sum += num;
	}

	va_end(args);
	return (sum);
}
