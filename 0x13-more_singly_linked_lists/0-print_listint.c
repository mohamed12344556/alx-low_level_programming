/*
 * File: 0-print_listint.c
 * Auth: Mohamed Ahmed
 */

#include "lists.h"

/**
 * Print_listint - prints all of the factors of a listint_t listing.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->n);
		cont++;
		node = node->next;
	}

	return (cont);
}


