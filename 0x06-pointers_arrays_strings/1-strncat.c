#include <stdio.h>
#include "main.h"
/**
 * _strncat - the function that concatenates two different string
 * @dest: first string
 * @src: second string
 * @n: the number of bytes to be determined
 * Return: shows the address of the result
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	
	while (*dest_end != '\0')
	{
	dest_end++;
	}
	while (*src != '\0' && n > 0)
	
	{

	*dest_end = *src;
	dest_end++;
	src++;
	n--;
	}
	*dest_end = '\0';
	return (dest);
}
