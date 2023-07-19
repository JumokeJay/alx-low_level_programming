#include <stdio.h>
#include "main.h"
/**
 * _islower - this is used to check the case of the alphabet
 * @c - check the character
 * return - 1 if it is lowercase and 0 if it not
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
