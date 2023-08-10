#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  the function for the strings
 * @s1: the first string
 * @s2: the second string
 * @n: the integer
 * Return: the resut of the code
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, len = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
		len++;
	}
	if (s2 == NULL)
	{
		s2 = "";
		len2++;
	}
	for (i = 0; s1[i] != '\0'; i++, len++)
		;
	for (i = 0; s2[i] != '\0' &&  i < n; i++, len2++)
		;
	s3 = malloc((sizeof(char) * len) + (sizeof(char) * len2) + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
		s3[i] = s2[j];
	s3[i] = '\0';
	return (s3);
}
