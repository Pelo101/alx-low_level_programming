#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
**string_nconcat - function that concatenates two strings.
* @s1: string 1
* @s2: string 2
* @n : number of bytes .
* Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)

	str = (char *)malloc((len1 + n + 1) * sizeof(char));

	else

	str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}


