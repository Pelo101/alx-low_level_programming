#include "main.h"
#include <stdlib.h>


/**
*_strdup - function that returns a pointer to a newly allocated space in memory,
*which contains a copy of the string given as a parameter.
*@str: source string.
*
*/

char *_strdup(char *str)
{

	char *p;

	int i;

	int len = 0;


	while (str[len] != '\0')
		len++;


	p = (char*)malloc((len + 1) * sizeof(char));


	if (p == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		p[i] = str[i];


	}
	return (p);

}
