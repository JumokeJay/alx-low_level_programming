#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * add_nodeint_end - the function that addds a new node at the end
 * @head: the pointer of the first node
 * @n: the parameter of the new node
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{

	return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{

	*head = new_node;
	}
	else
	{
	listint_t *current = *head;

	while (current->next != NULL)
	{
	current = current->next;
	}
	current->next = new_node;
	}
	return (new_node);
}
