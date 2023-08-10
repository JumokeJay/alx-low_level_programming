#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  the function for the strings
 * @s1: the first string
 * @s2: the second string
 * @n: the integer
 * Return: the resut of the code
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";

 	unsigned int len_s1 = strlen(s1);
	unsigned int len_s2 = strlen(s2);

	if (n >= len_s2) n = len_s2;

	unsigned int total_length = len_s1 + n + 1;

	char *result = (char *)malloc(total_length * sizeof(char));
	if (result == NULL)
	{
	return (NULL);
	}

	strncpy(result, s1, len_s1);
	strncpy(result + len_s1, s2, n);

 	result[total_length - 1] = '\0';

	return (result);
}
