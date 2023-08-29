#include "lists.h"
#include <stddef.h>
/*
 * listint_len - the function that returns the numberof elements
 * @h: the parameter of the element
 *
 * Return: the list of the elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
	h = h->next;
	node_count++;
	}

	return (node_count);
}
