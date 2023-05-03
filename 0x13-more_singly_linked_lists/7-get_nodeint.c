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
	listint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
