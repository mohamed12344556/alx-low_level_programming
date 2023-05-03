/*
 * File: 102-free_listint_safe.c
 * Auth: Mohamed Ahmed
 */
#include "lists.h"

/**
 * Free_listint_safe - frees a connected list
 * @h: Pointer to the first node inside the connected list
 *
 * Return: Quantity of factors within the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
