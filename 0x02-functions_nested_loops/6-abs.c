#include "main.h"
#include <stdio.h>
/**
 * _abs - this is the absolute variable for the function
 * @b: parameter for the function
 *
 * Return: in this case 0
 */
int _abs(int b)
{
	int result;

	if (b < 0)
		result = b * (-1);
	else
		result = b;

	return (result);
}
