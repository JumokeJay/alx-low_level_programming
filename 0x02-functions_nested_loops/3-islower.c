#include <stdio.h>
#include "main.h"
/**
 * main - this is the entry point
 * Return - this is always 0 (success)
 * _islower - this is used to check the case of the alphabet
 * @c - character to be checked
 */
/**
 * _islower - thi is used to check the case of the alphabet
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

