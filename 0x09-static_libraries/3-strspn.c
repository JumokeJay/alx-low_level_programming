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
unsigned int a = 0;
	int b;

	if (*s == '\0')
	return (0);

	while (*accept)
	{
	for (b = 0; s[b] != ','; b++)
	{
	if (s[b] == *accept)
	{
	a++;
	}
	}
	accept++;
	}
	return (a);
}
