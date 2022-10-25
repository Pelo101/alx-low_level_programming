#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: head of list
 *
 * Return: the number of nodes
 */


size_t print_listint(const listint_t *h)

{
	print_listint fruits = *h;
	size_t *next = 0;



	while (h != NULL)

	{
		printf("%d\n", h->n);
		next++;
		h = h->next;
	}
	return (next);
}
