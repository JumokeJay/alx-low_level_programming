#include <stdio.h>
/**
 * puts2 - the function to print the character of a string
 * @str: the character to be defined
 * Return: the print of the string
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
	putchar(str[index]);

	index += 2;

	if (str == NULL)
	return;
	}
	putchar('\n');
}
