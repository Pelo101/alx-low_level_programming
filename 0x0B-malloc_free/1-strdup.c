#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * string given as a parameter
 * @str: string to be copied
 *
 * Return: NULL in case of error, pointer to be allocated
 */

char *_strdup(char *str)
{
	char *cpy;

	int i, len;


	if (str  == NULL)
		return (NULL);
	for (i = 0; str[i];  i++)
		len++;

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (i = 0;  str[i]; i++)
	{
		cpy[i] = str[i];
	}
	cpy[len] = '/0';

	return (cpy);
}

