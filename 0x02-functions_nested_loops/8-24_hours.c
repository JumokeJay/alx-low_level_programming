#include "main.h"
#include <stdio.h>
/**
 * void_jack_bauer - this is the function for the time of the day
 * no parameters
 * Return: void nothing
 */
void jack_bauer(void)
{
	int a = 0, b = 0, c = 0;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			for (c = 0; c < 10; c++)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				_putchar(':');
				_putchar(b + '0');
				_putchar(c + '0');
				_putchar('\n');
			}
			c = 0;
		}
		b = 0;
	}
}
