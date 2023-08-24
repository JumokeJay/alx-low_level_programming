#include "lists.h"
#include <stdlib.h>
/*
 * list_len - the function that shows the length of the lists
 * @h: the parameter of the list
 * Return: the result of the lists
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
	a++;
	h = h->next;
	}
	return (a);
}
