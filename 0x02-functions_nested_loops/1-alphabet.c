#include "main.h"
#include <stdio.h>
/**
 * main - this is the entry point as usual
 * Return: should and always be 0 (success)
 *
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z') {
	putchar(alphabet);
	alphabet++;
    }
	putchar('\n');
}
