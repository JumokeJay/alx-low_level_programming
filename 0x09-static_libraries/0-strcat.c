#include <stdio.h>
#include "main.h"
/**
 * _strcat - the function to concatenate two strings
 * @dest: first string
 * @src: secong string
 * Return: nothing
 */

char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
{
	dest_end++;
}

	while (*src != '\0')
{
	*dest_end = *src;
	dest_end++;
	src++;
}
	*dest_end = '\0';
	return (dest);
}
