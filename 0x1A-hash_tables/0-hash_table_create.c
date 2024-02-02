#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *hash_table_create - function that creates a hash table.
 *@size: size of the hash table
 *Return: returns pointer to newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int y;

	new_table = (hash_table_t *)malloc(sizeof(hash_table_t) * size);

	if (new_table != NULL)
	{
		new_table->size = size;


		for (y = 0; y < size; y++)
		{
			new_table[y].array  = NULL;
		}
	}
	return (new_table);

}
