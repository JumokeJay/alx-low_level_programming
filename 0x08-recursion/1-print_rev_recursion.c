#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - the function for printing in reverse
 * @s: the string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}

	_print_rev_recursion(s + 1);
	putchar(*s);
}
