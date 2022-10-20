#include "lists.h"

/**
 *print_list - print all elements of a list
 *@h: pointer to the list
 *
 *Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t list = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		list++;
	}
	return (list);
}


