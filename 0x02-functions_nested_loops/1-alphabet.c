#include "main.h"
#include <stdio.h>
/**
 * Return: should and always be 0 (success)
 * print_alphabet - this is to print the alphabet
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
