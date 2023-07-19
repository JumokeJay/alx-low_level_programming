#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - this is to print lowercase alphabet
 * Return: doesnt return anything
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');
}
