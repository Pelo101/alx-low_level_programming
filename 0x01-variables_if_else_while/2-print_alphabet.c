#include <stdio.h>

/**
 * main - print alphabet in lowercase followed by new line.
 *
 * Return: 0 Always
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
