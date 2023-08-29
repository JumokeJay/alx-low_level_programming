#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * sum_listint - the function that returns the sum
 * @head: the pointer of the node
 *
 * @Return: the result of the code
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);
}
