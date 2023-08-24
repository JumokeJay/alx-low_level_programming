#include "lists.h"
#include <stdio.h>

/**
 * print_list - the function to print the list
 * @h: the parameter h to be determined
 * Retturn: the result showing the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);

	h = h->next;
	count++;
}
	return (count);
}
