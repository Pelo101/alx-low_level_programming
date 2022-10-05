# include "main.h"

/**
 * str_concat - a function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: NULL in case of failure, success pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	int i,  concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (i  = 0;  s1[i]  ||  s2[i];  i++)
		len++;

	concat_str  =  malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (i  = 0;  s1[i];  i++)
		concat_str[concat_index++] = s1[i];
	for (i = 0; s2[i]; i++)
		concat_str[concat_index] = s2[i];

	return (concat_str);
}
