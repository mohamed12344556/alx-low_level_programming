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
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
