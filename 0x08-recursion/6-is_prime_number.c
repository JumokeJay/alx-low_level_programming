#include "main.h"
#include <stdio.h>
/**
 * is_prime_helper - the function to get the prime number
 * is_prime_number - the function to get thte actual number
 * @n: the integer
 * @divisor: the mathematical divisor
 * Return: the result
 */

int is_prime_helper(int n, int divisor)
{
	if (divisor == 1)
	{
	return (1);
	}

	if (n % divisor == 0)
	{
	return (0);
	}
	return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - the function that betty is disturbing for
 * @n: the integer
 * Return: the answr to the code
 */

int is_prime_number(int n)
	{
	if (n <= 1)
	{
	return (0);
	}

	return (is_prime_helper(n, n - 1));
}
