#include "main.h"
#include <stdio.h>
/**
 * _strspn - the function for the prefix substring
 * @s: the segment of the string
 * @accept: the content of the bytes
 * Return: the result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int f;

	while (*s != '\0')
	{
	f = 0;

	char *a = accept;
	while (*a != '\0')
	{
	if (*a == *s)
	{
	f = 1;
	break;
	}
	++a;
	}
	if (!f)
	{
	break;
	}
	++length;
	++s;
	}
	return (length);
}
