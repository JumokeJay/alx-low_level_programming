#include <stdio.h>
/**
 * rev_string - a function that reverses the string
 * @s: the string to be reversed
 * Return: the reverse of the string
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	if (s == NULL)
	return;

	while (*end != '\0')
	{
	end++;
	}
	end--;

	while (start < end)
	{
	char temp = *start;
	*start = *end;
	*end = temp;

	start++;
	end--;
	}
}
