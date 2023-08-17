#include "function_pointers.h"
#include <stdio.h>
/*
 * print_name - to print the name using a pointer
 * print_string - to print the string using a pointer
 * @f: the pointer to the function
 * @name: the string to be added
 * @str: the string itself
 * Return: void
 */

void print_string(char *str)
{
	while (*str != '\0')
	{
	putchar(*str);
	str++;
	}
}

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
