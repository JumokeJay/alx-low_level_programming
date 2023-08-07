#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - the function that concenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the result of the code
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	concatenated = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (concatenated == NULL)
	{
	return (NULL);
	}

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
