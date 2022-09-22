# include "main.h"
# include <stdio.h>
/**
 *_strcat - function concatenates two strings and output into a pointer
 *@des: destination folder of concatenation
 *@src: string that is appended
 *
 * Return: pointer to @dest
 */

char *_strcat(char *dest, char *src)

{

	int index = 0, int dest_length = 0;

		while (dest[index++])
			dest_length++;

		for (index = 0 ; src[index] ; index++)

		{
			dest[dest_length++]  = src[index];

		}
		return (dest);
}


