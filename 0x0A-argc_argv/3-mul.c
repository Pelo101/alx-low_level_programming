#include <stdio.h>
#include "main.h"

/**
* main - Write a program that multiplies two numbers.
* @argc: parameter.
* @argv: parameter.
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc < 3)
	{
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	sum = a * b;

	printf("%d\n", sum);
	return (0);
}


