#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * delete_nodeint_at_index - the function to delete the node at any point
 * @head: the pointer to the first data in the list
 * @index: the index of the node
 *
 * @Return: the suckses or failure of the code
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	unsigned int current_idx;

	if (*head == NULL)
	{
	return (-1);
	}

	if (index == 0)
	{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
	}
	current = *head;

	current_idx = 0;

	while (current != NULL && current_idx < index - 1)
	{
	current = current->next;
	current_idx++;
	}
	if (current == NULL || current->next == NULL)
	{
	return (-1);
}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);

}
