#include <stdio.h>
#include "main.h"
/**
 * main - this is the entry point
 * print_alphabet_x10 - this is the function for the print of alphabet 10 times
 * Return - always should be 0 (success)
 */

void print_alphabet_x10(void)

{
char alphabet = 'a';
int repeat = 10;

while (repeat > 0)
{
char currentalphabet = alphabet;

while (currentalphabet <= 'z')
{
putchar(currentalphabet);
currentalphabet++;
}

repeat--;

if (repeat > 0)
putchar('\n');
}
putchar('\n');
}
