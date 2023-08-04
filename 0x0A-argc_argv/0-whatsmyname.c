#include <stdio.h>

/**
*main - A program that prints its name, followed by a new line.
* @argc: parameter
* @argv: parameter.
*Return: program
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);

}
