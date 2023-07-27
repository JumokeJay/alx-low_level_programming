#include "main.h"
#include <stdio.h>
/**
 * _strcmp - the function that compares teo strings
 * @s1: the first string
 * @s2: the second string
 * Return: void
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
	if (*s1 != *s2)
	{
	return (*s1 < *s2) ? -1 : 1;
	}
	s1++;
	s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
{
	return (0);
}
	else
{
	return (*s1 < *s2) ? -1 : 1;
}
}
