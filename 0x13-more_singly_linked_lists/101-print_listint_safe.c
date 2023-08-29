#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - the function to count the nodes
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *rat, *cat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	rat = head->next;
	cat = (head->next)->next;

	while (cat)
	{
	if (rat == cat)
	{
	rat = head;
	while (rat != cat)
	{
	nodes++;
	rat = rat->next;
	cat = cat->next;
	}

	rat = rat->next;
	while (rat != cat)
	{
	nodes++;
	rat = rat->next;
	}

	return (nodes);
	}

	rat = rat->next;
	cat = (cat->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}

	else
	{
	for (index = 0; index < nodes; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
