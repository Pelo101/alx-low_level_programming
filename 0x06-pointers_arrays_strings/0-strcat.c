# include "main.h"

/**
 *_strcat - function concatenates two strings and output into a pointer
 *@des: destination folder of concatenation
 *@src: string that is appended
 *
 * Return: pointer to @dest
 */

char *_strcat(char *dest, char *src)

{

	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
	    dest[i] = scr[j]
		i++;
	    	j++;
	}
	 return (dest);
}


