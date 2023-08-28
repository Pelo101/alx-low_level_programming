#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
*listint_len -  function that returns the number of elements
*in a linked listint_t list.
*@h: first node.
*Return: number of elements.
*/

size_t listint_len(const listint_t *h)
{

	size_t count = 0;

	while (h)
	{

		h = h->next;
		count++;
	}
	return (count);
}
