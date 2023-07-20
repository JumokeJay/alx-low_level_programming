#include "main.h"
/**
 * print_line - the function that calls the line
 * @n: parameter for the line
 *
 * Return: to show void
 */
void print_line(int n)
	{
	int i;
	
		if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
	}
