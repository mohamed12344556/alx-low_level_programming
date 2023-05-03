/*
 * File: 7-get_nodeint.c
 * Auth: Mohamed Ahmed
 */

#include "lists.h"

/**
 * Get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the list.
 * @index: nth node.
 * Return: Nth node, if the node does not exist, returns NULL.
 **/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
