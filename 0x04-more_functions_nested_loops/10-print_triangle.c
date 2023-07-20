#include "main.h"

/**
 * print_triangle - use the function to draw a triangle.
 * @size: total size of the triangle
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0 && size != 1)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = (size - a); b > 0; b--)
				_putchar(' ');
			for (c = 0; c < a; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
