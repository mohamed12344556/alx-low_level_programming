#include "lists.h"

/**
 * Print_listint - prints all of the factors of a listint_t listing.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}



