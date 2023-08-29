#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * free_listint2 - the function that frees the linked list
 * @head: the pointer to the list to be free
 *
 * @Return: the result of the code
 */

void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
	}
}
