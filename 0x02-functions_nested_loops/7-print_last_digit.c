#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - this is the function to print
 * @p: the paramenter that would be determine
 * Return: to revert ther last digit after %10
 */
int print_last_digit(int p)
{
	char a;

	if (p >= 0)
		a = (p % 10);
	else if (p < 0)
		a = -(p % 10);
	_putchar(a + '0');

	return (a);
}
