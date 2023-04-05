#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - finds numbers of nodes in a linked list
 * @h: pointer to head of linked list to find the size of
 *
 * Return: number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}

	return (node);
}
