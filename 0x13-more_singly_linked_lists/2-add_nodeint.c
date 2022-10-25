#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint - add node at the beginning of the list
 *@h: head of the list
 *
 *Return: the address of the new element  or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;


	ptr = (listint_t*)malloc(sizeof(listint_t));
		 return (NULL);

		if (ptr == NULL)
			return (NULL);

		 ptr->n = n;
		 ptr->next = *head;
		 *head = ptr;
		 return (ptr);
}
