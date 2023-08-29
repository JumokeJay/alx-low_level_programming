#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * insert_nodeint_at_index - the function to insert node at a position
 * @head: the pointer of the node location
 * @idx: the index of where the node is placed
 * @n: the parameter to insert in the node
 *
 * @Return: the result of the node or NO
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	}
	else
	{
	listint_t *current = *head;
	unsigned int current_idx = 0;


	while (current != NULL && current_idx < idx - 1) {
	current = current->next;
	current_idx++;
	}

	if (current == NULL) {

	free(new_node);
	return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	}

	return (new_node);
	}
