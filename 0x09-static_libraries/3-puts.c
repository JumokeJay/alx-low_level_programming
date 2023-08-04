#include <stdio.h>
/**
 * _puts - to put a string into stout in a new line
 * @str: the string to print
 * Return: the value needed
 */

void _puts(char *str)
{
	while (*str != '\0')

	{
	putchar(*str);
	str++;
	}
	putchar('\n');
}
