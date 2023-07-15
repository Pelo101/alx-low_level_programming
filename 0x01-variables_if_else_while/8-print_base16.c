#include <stdio.h>

/**
* main - prints all the numbers of base 16 in lowercase.
*
* Return: 0 Always
*/

int main(void)
{
	char i = '0';
	char c;

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
