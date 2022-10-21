#include "lists.h"
#include <stdio.h>

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
			printf("[0], (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		list++;
		h = h->next;
	
	}
	return (list);
}


