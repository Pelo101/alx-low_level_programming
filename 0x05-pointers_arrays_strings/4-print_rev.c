# include <stdio.h>
# include <string.h>
# include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int len  = strlen(s);

	while (len--)
		putchar(*(s  + len));

	putchar(10);
}
