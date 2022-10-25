#include "lists.h"


/**
 * print_listint - prints all elements of a list
 * @h: head of list
 *
 * Return: the number of nodes
 */


size_t print_listint(const listint_t *h)

{
	const listint_t *ap;
	size_t fruits = 0;

	ap = h;

	while (ap != NULL)

	{
		printf("%d\n", ap->n);
		fruits++;
		ap = ap->next;
	}
	return (fruits);
}
