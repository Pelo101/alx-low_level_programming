
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 *@filename: file to be created.
 *@text_content: text string to be inputed into file.
 *Return: 1 on Success
 */

int create_file(const char *filename, char *text_content)
{

	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	size_t len = 0;

	ssize_t b;


	if (fd == -1)
	{
		return (-1);

	}

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;

		}
	}

	b = write(fd, text_content, len);

	if (b == -1)
		return (-1);


	close(fd);
	return (1);

}
