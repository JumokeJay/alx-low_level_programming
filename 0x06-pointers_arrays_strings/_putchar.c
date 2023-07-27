#include "main.h"
#include <unistd.h>
/**
 * _putchar - it puts the character c to standard output
 * @c: is the main character
 * Return: if successful shows 1, negative 1 if not.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
