#include "main.h"
#include <stdio.h>
/**
 * times_table - to show the derivatives of 9 times
 * no parameter
 * no return value just printing
 */
void times_table(void)
{
	int num, mult, times;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			times = num * mult;

			if (times <= 9)
				_putchar(' ');
			else
				_putchar((times / 10) + '0');

			_putchar((times % 10) + '0');
		}
		_putchar('\n');
	}
}
