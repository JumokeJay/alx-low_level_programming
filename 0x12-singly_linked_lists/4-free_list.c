
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/*
 * free_list - the function to free a linked list
 * @head: the list to be freed
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
	list_t *temp = current;
	current = current->next;
	free(temp->str);
	free(temp);
}
}
