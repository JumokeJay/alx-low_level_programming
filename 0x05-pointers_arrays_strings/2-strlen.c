#include <stdio.h>
/**
 * _strlen - function to show the length of a string
 * @s: the string to be determined
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}
