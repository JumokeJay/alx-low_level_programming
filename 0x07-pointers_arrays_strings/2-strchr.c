#include "main.h"
#include <stdio.h>

/**
 * _strchr - the function to locate the string
 * @s: the string to be located
 * @c: the character
 * Return: the result of the code
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')

	{

	if (*s == c)

	{
	return (s);
	}
	++s;
	}

	return (NULL);
}
