# includE "main.h"

/**
 * _strncat - concatenate two strings but add inputed number of bytes
 * @dest: destination string
 * @src: string to be appended to dest
 * @n: integer parameter to compare
 * Return: new concatenated string
 */


char *_strncat(char *dest, char *src, int n)
{
	int index = 0;

	int dest_len = 0;


	while (dest[index++])
		dest_len++;

	for (index  = 0;  src[index]   && index  < n; index++)

		dest[dest_len++]  =  src[index];

	return (dest);

}
