#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the beginning of the list
 * @index: index of the node to return
 * Return: pointer to the nth node, or NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
