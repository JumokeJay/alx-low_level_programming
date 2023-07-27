#include <stdio.h>
#include "main.h"
/**
 * cap_string - the function that changes all words to capital letters
 * @str: the string to be changed
 * Return: the outcome
 */

char *cap_string(char *x)
{
	int a = 0;
	int b = 1;
	char *returnptr = x;
	char *del = "\t\n;. ,!?\"(){}\0";

	while (*x)
	{
	if (b == 1)
	{
		if (*x >= 'a' && *x <= 'z')
		{
		*x -= 32;
		}
	b = 0;
	}

	for (a = 0; del[a]; a++)
	{
	if (*x == del[a])
		b = 1;
	}
	x++;
	}
	return (returnptr);
}
