#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns number of elements of a dlistint_t list
 * @h: pointer to the start of the doubly linked list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
