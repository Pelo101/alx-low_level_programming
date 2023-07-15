#include <stdio.h>

/**
* main - print alphabet in lowercase,except for letter q and e.
*
* Return: 0 Always
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);

}
