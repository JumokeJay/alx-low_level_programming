#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - the function to print the list
 * @h: the parameter h to be determined
 * Retturn: the result showing the list
 */

typedef struct list_s
{
	char *str;
	struct list_s *next;
}
list_t;

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
{
	if (h->str == NULL)
	printf("[%lu] (nil)\n", count);
	else
	printf("[%lu] %s\n", count, h->str);

	h = h->next;
	count++;
}
	return (count);
}
