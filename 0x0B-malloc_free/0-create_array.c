# include "main.h"

/**
 *create_array - creates an array  of chars, initializes to a specific char
 * @size: size of the array
 * @c: character to insert
 * Return: NULL if size is zero or it fails
 * Pointer to array if everything is normal
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	unsigned int i;

	if  (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i  = 0;   i  < size ; i++)
		p[i] = c;

	return (p);

}
