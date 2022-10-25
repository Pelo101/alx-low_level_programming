#include "lists.h"

/**
 *listint_len - prints the number of elements
 *@h: head of the list
 *
 *Return: number of elements
 */

size_t listint_len(const listint_t *h)

{
	const listint_t *ap = h;

	size_t count = 0;

	ap = h;

	while (ap != NULL)

	{
		count++;

		ap = ap->next;

	}
	return (count);
}

