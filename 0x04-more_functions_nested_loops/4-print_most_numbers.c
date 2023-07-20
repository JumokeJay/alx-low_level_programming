#include "main.h"
/**
 * print_most_numbers - the function that leads to the number
 * Return: what to return
 */

void print_most_numbers(void)
{
	int a = 0;
	while (a < 10)
	{
	if (a != 2 && a != 4)
	{
	_putchar('0' + a);
	}
	a++;
	}
	_putchar('\n');
}
