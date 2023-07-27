#include <stdio.h>
#include "main.h"
/**
 * cap_string - the function that changes all words to capital letters
 * @str: the string to be changed
 * Return: the outcome
 */

char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *ptr = str;

	while (*ptr != '\0')
{
	if ((*ptr) || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
	{
	capitalize_next = 1;
	}
	else if (capitalize_next)
	{
	capitalize_next = 0;
	}
	ptr++;
	}
	return (str);
}
