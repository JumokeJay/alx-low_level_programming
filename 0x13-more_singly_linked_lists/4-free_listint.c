#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * free_listint - the function that frees a list
 * @head: the pointer of the function
 *
 * @Return: the result of the code
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
	listint_t *temp = head;
	head = head->next;
	free(temp);
}
}
