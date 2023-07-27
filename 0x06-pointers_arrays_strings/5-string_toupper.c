#include "main.h"
#include <stdio.h>
/**
 * string_toupper - the function to change lower to upper
 * @str: the string to convert
 * Return: the outcome
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
	*ptr = *ptr - 'a' + 'A';
	}
	ptr++;
	}

return (str);
}
