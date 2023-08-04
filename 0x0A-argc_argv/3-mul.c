#include "main.h"
#include <stdio.h>

/**
 * main - the function of the argument
 * @argc: the count of the argument
 * @argv: the array of the argument
 * Return: the result of the code
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}

	mul = atoi(argv[argc 2]) * atoi(argv[argc - 1]);

	printf("%d\n", mul);

	return (0);
}
