/*
 * File: 5-free_listint2.c
 * Auth: Mohamed Ahmed
 */

#include "lists.h"

/**
 * Free_listint2 - frees a listint_t listing.
 * the function sets the head to NULL.
 * @head: pointer to the list.
 **/


void free_listint2(listint_t **head)
{
	listint_t *actual_node;
	listint_t *next_node;

	if (!head)
		return;

	actual_node = *head;
	next_node = (*head)->next;
	while (next_node)
	{
		free(actual_node);
		actual_node = next_node;
		next_node = next_node->next;
	}
	free(actual_node);
	*head = NULL;
}
