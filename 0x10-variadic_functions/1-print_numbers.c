#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/*
 * print_numbers - the function to print numbers
 * @seperator: the string in between the numbers
 * @n: the number of parameters to be passed to the function
 * @...: the variable to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(args, int));

	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	}

	va_end(args);

	putchar('\n');
}
