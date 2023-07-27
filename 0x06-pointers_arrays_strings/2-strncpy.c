#include <stdio.h>
#include "main.h"

/**
 * _strncpy - the function that cop0ies a string
 * @dest: the destination of the string
 * @sr: where it is copied from
 * @n: the string itself
 * Return: show the result i guess
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
