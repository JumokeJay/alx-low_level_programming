#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - the function for the new line
 * @s: the parameter for the code
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	putchar('\n');
	return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
