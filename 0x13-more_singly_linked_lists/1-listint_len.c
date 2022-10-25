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

	size_t fruits;


	ap = h;

	while (ap != NULL)
	{
		fruits += 1;
		ap = ap->next;
	}
	return (fruits);
}

