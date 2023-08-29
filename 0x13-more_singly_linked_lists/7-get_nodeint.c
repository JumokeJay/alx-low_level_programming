#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * get_nodeint_at_index - the function that returns the nth node
 * @head: the pointer of the node
 * @index: the index of the node
 *
 * @Return: the result of the code
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (head != NULL)
	{
	if (current_index == index)
	{
	return (head);
	}
	head = head->next;
	current_index++;
	}
	return (NULL);
}
