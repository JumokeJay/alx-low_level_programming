#include <stdio.h>
/**
 * print_rev - the function to print the string in reverse
 * @s: the string to be printed in reverse
 * Return: the string in reverse
 */

void print_rev(char *s)
{
	int length = 0;
	char *end = s;

	if (s == NULL)
	return;

	while (*end != '\0')
	{
	length++;
	end++;
	}
	while (length > 0)
{
	end--;
	putchar(*end);
	length--;
}

	putchar('\n');

}
