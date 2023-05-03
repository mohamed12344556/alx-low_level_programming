/*
 * File: 8-sum_listint.c
 * Auth: Mohamed Ahmed
 */

#include "lists.h"

/**
 * Sum_listint - returns the sum of all the information (n) of a listint_t listing.
 * @head: pointer to the list.
 * Return: Sum of all data inside the list, zero if the lost is empty.
 **/


int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
