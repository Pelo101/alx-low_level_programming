#include <stdio.h>

/**
* main -  prints the lowercase alphabet in reverse, followed by a new line.
*
* Return: Always 0
*/

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
