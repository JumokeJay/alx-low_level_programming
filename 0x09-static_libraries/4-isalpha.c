#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks if c is lowercase.
 * @c: the char to check.
 *
 * Return: 1 if c is alphabetic, if not then 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
