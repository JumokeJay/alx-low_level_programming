#include <stdio.h>
/**
 * main - This is the Entry point
 * this code is to show the different sizes of various types on my computer
 * Return: this will always be 0 (success)
 */
int main(void)
{
	/* This shows the different sizes of various types on the computer */
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
