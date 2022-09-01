#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - returns sum of all data of a dlistint_t linked list
 * @head: pointer to the beginning of the linked list
 * Return: sum of all data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total = total + head->n;
		head = head->next;
	}
	return (total);
}
