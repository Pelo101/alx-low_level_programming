#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - function that deletes the head node of a listint_t linked list.
*@head: first node.
*Return: head nodes data.
*/
int pop_listint(listint_t **head)
{

	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
