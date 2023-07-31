#include <stdio.h>
#include "main.h"
/**
 * _memcpy - the function to copy the memory
 * @dest: the ending point
 * #src: the location from whence it came
 * @n: the number of bytes being copied
 * 
 * Return: what to disclose
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n--)
	{
	*dest_ptr = *src_ptr;
	++dest_ptr;
	++src_ptr;
	}
	return (dest);
}
