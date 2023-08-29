#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * pop_listint - the function that deletes the head node
 * @head: the pointer of the linked list
 *
 * @Return: the data inside the elements
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
	return (0);
	}

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
