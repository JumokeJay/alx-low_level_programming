#include <stdio.h>
/*
 * main - Entry point
 * Return: always 0 (success)
 *
 */
int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
	for (int j = 0; j <= 9; j++)
	{
	putchar('0' + i);
	putchar('0' + j);
	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');
	return (0);
}
