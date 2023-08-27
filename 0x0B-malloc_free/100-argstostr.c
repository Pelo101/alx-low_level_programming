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

	int  position = 0;
	int i = 0;
	int total_length = 0;
	char *arg = av[i];
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (*arg)
		{
			total_length++;
			arg++;
		}
		total_length++;
	}

	result = (char *)malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	while (i < ac)
	{
		while (*arg)
		{	result[position++] = *arg;
			arg++;
		}
		result[position] = '\n';
		position++;
		i++;
	}
	result[total_length] = '\0';
	return (result);
}

