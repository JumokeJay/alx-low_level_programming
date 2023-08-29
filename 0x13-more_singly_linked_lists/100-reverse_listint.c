#include "lists.h"
#include <stdio.h>
/*
 * reverse_listint - the function to reverse the list
 * @head: the pointer of the first node on the list
 *
 * @Return: the pointer to the first node on the new list
 */


listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = prev;
	prev = *head;
	*head = next;
	}

	*head = prev;

	return (*head);
}
