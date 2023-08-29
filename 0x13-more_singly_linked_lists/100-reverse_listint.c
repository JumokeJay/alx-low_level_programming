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
	listint_t *current = *head;

	while (current != NULL) {
	listint_t *next_node = current->next;
	current->next = prev;
	prev = current;
	current = next_node;
	}

	*head = prev;

	return (*head);
}
