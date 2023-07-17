#include <stdio.h>
/*
 * Main - Entry point as usual
 * Return: should always be 0 (success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
	putchar('0' + num);
	num++;
	}

	putchar('\n');
	return (0);
}
