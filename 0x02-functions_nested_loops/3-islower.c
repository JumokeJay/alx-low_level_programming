#include <stdio.h>
#include "main.h"
/**
 * main - this is the entry point
 * Return - this is always 0 (success)
 * islower - this is used to check the case of the alphabet
 */


int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return(1);
else
	return(0);
}

