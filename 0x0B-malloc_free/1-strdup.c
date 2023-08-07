#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - the function that directs the pointer of the memory
 * @str: the string to be allocated to the memory
 * Return: the result of the code
 */

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)

	{
	return (NULL);
	}

	duplicate = (char *)malloc(strlen(str) + 1);
	if (duplicate == NULL)
	{
	return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
