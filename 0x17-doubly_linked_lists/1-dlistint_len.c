#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *dlistint_len - returns the number of elements in a linked dlistint_t list.
 *@h:head of linked list.
 *Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);

}

