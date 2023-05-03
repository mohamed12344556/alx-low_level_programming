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
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
