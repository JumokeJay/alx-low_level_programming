#include <stdio.h>
/*
 * main - Entry point for alphabets
 * Return: should always be 0 (success)
 */
int main(void)/* main is entry point to compute this comman for alphabets */
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{

		putchar(alphabet);

	}
	putchar('\n');
	return (0);
}
