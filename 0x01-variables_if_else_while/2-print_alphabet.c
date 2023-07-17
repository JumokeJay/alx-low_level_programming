#include <stdio.h>
/*
 * main - Entry point for alphabets
 * Return: should always be 0 (success)
 */
int main(void)
{
	char alphabet;
	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');
	return (0);
}
