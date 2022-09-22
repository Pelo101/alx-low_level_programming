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

	int box = 0, int size = 0;

		while (dest[box++])
			size++;

		for (box = 0 ; src[box] ; box++)
			dest[size++]  = src[box];


		return (dest);
}


