#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all elements of a dlistint_t list
 * @h: pointer to the start of the doubly linked list
 * Return: the elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
