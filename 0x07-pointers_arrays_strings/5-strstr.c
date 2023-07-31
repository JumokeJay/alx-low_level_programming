#include "main.h"
#include <stdio.h>
/**
 * _strstr - the function to locate a substring
 * @haystack: the container being searched
 * @needle: the item or the substring to find
 * Return: the result of the search
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
	return (haystack);
	}
	while (*haystack != '\0') 
	{
	char *h = haystack;
	char *n = needle;

	while (*n != '\0' && *h == *n)
	{
	++h;
	++n;
	}
	if (*n == '\0')
{
	return (haystack);
	}
	++haystack;
	}
	return (NULL);
}
