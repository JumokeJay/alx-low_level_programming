#include <stdio.h>
/*
 * main - Entry point as usual
 * Return: this always is 0 (success)
 * damn thing doesnt allow main function to have its description
 */

int main(void)
{
	char high, e, q;
	
	e = 'e';
	q = 'q';

	for (high = 'a'; high <= 'z'; high++)
{
	if (high != e && high != q)
		putchar (high);
}
	putchar('\n');
	return (0);
}
