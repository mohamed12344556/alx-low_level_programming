/*
 * File: 9-insert_nodeint.c
 * Auth: Mohamed Ahmed
 */

#include "lists.h"

/**
 * Insert_nodeint_at_index - inserts a brand new node at a given role.
 * @head: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: The cope with of the brand new node, or NULL if it failed
 **/


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux_node = *head;
	listint_t *new_node;
	unsigned int index;
	unsigned int cont = 0;

	/* create node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* Border case for insert at the beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	/* Search of position to insert */
	index = idx - 1;
	while (aux_node && cont != index)
	{
		cont++;
		aux_node = aux_node->next;
	}

	/* Widespread case */
	if (cont == index && aux_node)
	{
		new_node->next = aux_node->next;
		aux_node->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
