#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*
 * main - Entry point
 * Return: should always be 0 (success)
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("is positive\n");
	}
	else if (n < 0)
	{
	printf("is negative\n");
	}
	else
	{
	printf("is zero\n");
	}
	return (0);
}
