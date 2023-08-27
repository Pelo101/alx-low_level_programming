#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j;
	char *result;
	int position = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
	{
			total_length++;
			j++;
		}
		total_length++;
	}

	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
	{
			result[position] = av[i][j];
			position++;
			j++;
		}
		result[position] = '\n';
		position++;
	}
	result[position] = '\0';
	return (result);
}

