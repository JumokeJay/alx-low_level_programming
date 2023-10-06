#include "main.h"
#include <unistd.h>
/**
 * _putchar - the character to get
 * @c: the character to print
 *
 * Return: show 1 if correct
 * On error, -1 is shown and
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
