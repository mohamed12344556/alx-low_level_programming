/*
 * File: 0-print_listint.c
 * Auth: Mohamed Ahmed
 */

#include "lists.h"


/**
 * Listint_len - returns the wide variety of elements in a connected listint_t listing.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/


size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}



