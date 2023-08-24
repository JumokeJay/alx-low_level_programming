#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * add_node - the function to add a node
 * @head: the list of the function
 * @str: the string to represent the list
 * Return: the result of the code
 */

typedef struct list_s 
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

char *custom_strdup(const char *src)
{
	if (src == NULL)
	return (NULL);

	char *dest = malloc(strlen(src) + 1);
	if (dest == NULL)
	return (NULL);

	strcpy(dest, src);
	return (dest);
}

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
	return (NULL);

	unsigned int len = 0;
	while (str[len])
	len++;

	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = custom_strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
