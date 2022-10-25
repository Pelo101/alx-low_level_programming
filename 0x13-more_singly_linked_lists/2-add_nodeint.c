#include "lists.h"


/**
 *add_nodeint - add node at the beginning of the list
 *@h: head of the list
 *
 *Return: the address of the new element  or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
		 return (NULL);

		if (temp == NULL)
			return (NULL);

		 temp->n = n;
		 temp->next = *head;
		 *head = temp;
		 return (temp);
}
