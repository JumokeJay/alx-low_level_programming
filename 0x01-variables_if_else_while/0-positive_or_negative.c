#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point
 * Return: should always be 0 (success)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("98 is positive\n");
	}
	else if (n < 0)
	{
	printf("-98 is negative\n");
	}
	else
	{
	printf("0 is zero\n");
	}
	return (0);
}
