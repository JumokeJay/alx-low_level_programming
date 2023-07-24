#include <stdio.h>
/**
 * *_strcpy - thr function that copies the string ny including
 * the terminating null to the buffer
 * @dest: where it will be copied to
 * @src: where it is copied from
 * Return: the result
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;
	if (dest == NULL || src == NULL)
	return NULL;
	while (*src != '\0') {
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';
	return dest_start;
}
