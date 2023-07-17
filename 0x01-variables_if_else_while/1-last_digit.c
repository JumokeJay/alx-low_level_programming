#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*
 * main - Entry point for the number
 * Return: always 0 (success)
 * betty style doc for function main goes there
 */
int main(void)
{
	int n, g;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	g = n % 10;
	if  (g > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, g);
	}
	else if (g == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, g);
	}
	else if (g < 6 && g != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, g);
	}
	/* your code goes there */
	return (0);
}
