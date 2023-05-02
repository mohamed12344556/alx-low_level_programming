#ifndef LISTS
#define LISTS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
 * File: lists.h
 * Auth: Mohamed Ahmed
 * Descrition: Header report containing prototypes and definitions for all functions
 *       and brands written in the 0x12-more_singly_linked_lists listing.
 */


/**
 * Struct listint_s - singly connected listing
 * @n: integer
 * @next: points to the next node
 *
 * Description: Singly related list node shape
 * for Holberton undertaking
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

listint_t *find_listint_loop(listint_t *head);
size_t free_listint_safe(listint_t **h);
size_t print_listint_safe(const listint_t *head);

listint_t *reverse_listint(listint_t **head);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

int sum_listint(listint_t *head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

void free_listint2(listint_t **head);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

listint_t *add_nodeint(listint_t **head, const int n);
size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);


#endif
