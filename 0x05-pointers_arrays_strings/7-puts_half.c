#include <stdio.h>
/**
 * puts_half - a function to print just half a string
 * @str: the string in question
 * Return: the values to reeturn or print
 */

void puts_half(char *str)
{
	int length = 0;
	char *end = str;

	int start_index = (length - 1) / 2;

	if (str == NULL)
	return;

	while (*end != '\0')
	{
	length++;
	end++;
	}

	while (str[start_index] != '\0') {
	putchar(str[start_index]);
	start_index++;
	}

	putchar('\n');
}
