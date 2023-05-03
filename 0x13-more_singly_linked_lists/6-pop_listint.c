/*
 * File: 6-pop_listint.c
 * Auth: Mohamed Ahmed
 */

#include "lists.h"

/**
 * Pop_listint - deletes the pinnacle node of a listint_t connected list.
 * @head: pointer to the list.
 * Return: Head node’s information (n).
 **/


int pop_listint(listint_t **head)
{
	int data;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	data = (*head)->n;
	*head = first_node->next;
	free(first_node);
	return (data);
}

