#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * add_note_end - the function to add a new node at the end of the list
 * @head: the pointer of the list
 * @str: the string to insert the new node
 * Return: the new address or to return null if wrong
 */

typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str)
{
	if (str == NULL)
	return (NULL);

	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	list_t *current = *head;
	while (current->next != NULL)
	{
	current = current->next;
	}
	current->next = new_node;
	}

	return (new_node);
}
