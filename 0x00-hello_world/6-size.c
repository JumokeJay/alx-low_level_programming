#include <stdio.h>
/**
 * main - This is the Entry point
 * Return - this will always be 0 (success)
 */
int main(void)
{
	/* This shows the different sizes of various types on the computer */
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes\n", sizeof(long long int));
	printf("Size of a float: %zu bytes\n", sizeof(float));
	return (0);
}
