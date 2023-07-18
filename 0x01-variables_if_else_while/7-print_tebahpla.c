#include <stdio.h>
/*
 * main - This is the Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
	putchar(lowercase);
	lowercase--;
	}

	putchar('\n');
	return (0);
}
