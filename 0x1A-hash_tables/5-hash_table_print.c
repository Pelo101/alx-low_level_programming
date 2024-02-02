#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *hash_table_print - function that prints a hash table.
 *@ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *curr_node;


	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr_node = ht->array[i];

		while (curr_node != NULL)
		{
			printf("'%s : %s'", curr_node->key, curr_node->value);
			if (curr_node->next  != NULL)
			{
				printf(", ");
			}
			curr_node = curr_node->next;
		}
	}
	printf("}\n");
}
