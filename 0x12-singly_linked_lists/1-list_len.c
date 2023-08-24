#include <stdio.h>
#include "lists.h"

/**
*list_len - prints number of elements in a linked list.
*@h: head of linked list.
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;

	}
	return (count);

}
