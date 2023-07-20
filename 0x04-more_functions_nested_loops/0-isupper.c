#include "main.h"
/**
 * _isupper - uppercase check
 * @c: the character we will be checking
 *
 * Return: it will return 0 is lowercase and 1 if uppercase
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
