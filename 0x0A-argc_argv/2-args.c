#include "main.h"
#include <stdio.h>
/**
 * main -  the function for the program
 * @argc: the count for the argument
 * @argv: the array for the argument
 * Return: the result of the program
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
