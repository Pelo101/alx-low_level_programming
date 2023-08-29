#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*print_listint_safe - function that prints a listint_t linked list.
*@head: first node
*Return: the number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t  *slow = head;
	const listint_t  *fast = head;

	while (fast != NULL && fast->next != NULL)
	{

		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			printf("[%p] %d\n", (void *)fast->next, fast->next->n);
			exit(98);
		}
	}
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	}
	return (count);

}
