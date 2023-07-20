#include "main.h"
/**
 * more_numbers - the function to demand more numbers
 * @a: first integer
 * @c: second integer
 * Return: what it is bring out
 */
void more_numbers(void)
{
	int a, c;
	for (c = 0; c < 10; c++)
	{
	for (a = 0; a <= 14; a++)
	{
	if (a >= 10)
	{
	_putchar('0' + (a / 10));
	}
	_putchar('0' + (a % 10));
	}
	_putchar('\n');
	}
}
