/*
 * File: 4-free_listint.c
 * Auth: Mohamed Ahmed
 */

#include "lists.h"

/**
 * Free_listint - frees a listint_t listing.
 * @head: pointer to the list.
 **/


void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
