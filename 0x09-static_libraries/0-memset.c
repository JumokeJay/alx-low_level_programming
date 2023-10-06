#include <stdio.h>
#include "main.h"
/**
 * _memset - the function that contains the memory
 * @s: the first character
 * @b: the second character
 * @n: unsigned integer
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
{
	*(s + i) = b;
}
	return (s);
}
