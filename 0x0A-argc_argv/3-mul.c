#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the function of the argument
 * @argc: the count of the argument
 * @argv: the array of the argument
 * Return: the result of the code
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
