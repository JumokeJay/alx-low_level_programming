#include "main.h"

/**
 * _isdigit - to check if the entry is a digit
 * @c: the character to be determined
 *
 * Return: to print 1 if it is and 0 if not
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}
