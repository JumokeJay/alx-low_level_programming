#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - the function to search for bytes inside a string
 * @s: the string to be searched
 * @accept: character to be found
 * Return: the outcome
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	char *a = accept;
	while (*a != '\0')
	{
	if (*a == *s)
	{
	return (s);
	}
	++a;
	}
	++s;
	}
return (NULL);
}
