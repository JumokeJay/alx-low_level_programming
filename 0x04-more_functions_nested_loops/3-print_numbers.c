#include "main.h"

/**
 * print_numbers - to call up numbers from 0 to 9
 *
 * Return: to print out the numbers
 */
void print_numbers(void)
{
	int i = 0;
while (i < 10)
{
	_putchar(i + '0');
	i++;
}
	_putchar('\n');
}
