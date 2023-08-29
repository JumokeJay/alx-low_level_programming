#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * add_noteint - to add a new node at the beginning of the list
 * @head: the pointer to the first node
 * @n: the parameter to insert in the node
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	
	if (new_node == NULL)
	{

	return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
