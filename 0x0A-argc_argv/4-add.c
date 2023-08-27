#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * custom_isdigit - Checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int custom_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * is_positive_number - Checks if a string represents a positive number.
 * @str: The input string to be checked.
 *
 * Return: 1 if the string is a positive number, 0 otherwise.
 */

int is_positive_number(const char *str)
{
	while (*str)
	{
		if (!custom_isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 if successful, 1 if there's an error in input.
 */


int main(int argc, char *argv[])
{
	int sum, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

