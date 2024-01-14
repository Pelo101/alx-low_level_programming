#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *sum_dlistint - function that returns the sum of all
 *the data (n) of a dlistint_t linked list.
 *@head: start of linked list.
 *Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr_node = head;

	while (curr_node)
	{
		sum += curr_node->n;
		curr_node = curr_node->next;
	}

	return (sum);

}
