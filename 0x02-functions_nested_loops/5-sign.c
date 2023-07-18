#include "main.h"
#include <stdio.h>

/**
 * print_sign - to show if negative or positive
 * @n - the parameter for the determinant
 *
 * return - will show 1 if true and 0 if false
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}

	return (2);
}
