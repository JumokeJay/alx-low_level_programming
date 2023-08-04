#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
/**
 * is_positive_integer -  the function that defines the character
 * @str: is the string
 * Return: the reult of the code
 */

bool is_positive_integer(const char *str)
{
	while (*str != '\0')
	{
	if (!isdigit(*str))
	{
	return (false);
	}
	str++;
	}
	return (true);
}

/**
 * main - the function to print the program
 * @argc: the count of the argument
 * @argv: the array pf the argument
 * Return: the result of the code
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
	if (is_positive_integer(argv[i]))
	{
	sum += atoi(argv[i]);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	}

	printf("%d\n", sum);

	return (0);
}
