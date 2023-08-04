#include <stdio.h>

/**
* main - program that prints the number of arguments passed into it.
* @argc: parameter.
* @argv: parameter.
* Return: Alway 0 (Success)
*/

int main(int argc, char *argv[]__attribute__((unused)))
{


		printf("%d\n", argc - 1);
		return (0);
}
