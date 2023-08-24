#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * add_node - the function to add a node
 * @head: the list of the function
 * @str: the string to represent the list
 * Return: the result of the code
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *arrival;
	unsigned int len = 0;

	while (str[len])
	len++;

	arrival = malloc(sizeof(list_t));
	if (!arrival)
	return (NULL);

	arrival->str = strdup(str);
	arrival->len = len;
	arrival->next = (*head);
	(*head) = arrival;

	return (*head);
}
