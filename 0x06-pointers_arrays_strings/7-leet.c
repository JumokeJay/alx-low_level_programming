#include "main.h"
#include <stdio.h>
/**
 * leet - the function that encodes a string
 * @str: the string
 * Return: the value of n
 */

char *leet(char *str)
{
	char leet_map[] = "443371";

	for (int i = 0; str[i] != '\0'; i++)
{
	for (int j = 0; j < 5; j++)
	{
	if (str[i] == "aAeEoOtTlL"[j])
	{
	str[i] = leet_map[j];
	break;
	}
	}
	}

	return (str);
}
