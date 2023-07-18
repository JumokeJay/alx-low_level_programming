#include "main.h"
#include <unistd.h>
/**
 * main - this is the entry point
 * Return: always 0 (success)
 * failed to use two asteric yesterday hope its works today
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
