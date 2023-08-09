#include "main.h"
#include <stdlib.h>

/**
 *str_concat -	function that concatenates two strings
 *@s1: string 1.
 *@s2: string 2.
 *Return: pointer with address of new string.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	char *ns;

	while (s1[len1] != '\0')
	{
		len1++;

	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	ns = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (ns == NULL)

		return (NULL);

	for (i = 0; i < len1; i++)
	{
		ns[i] = s1[i];

	}

	for (j = 0; j < len2; j++)

	{
		ns[i + j] = s2[j];

	}
	ns[i + j] = '\0';


	return (ns);

}

