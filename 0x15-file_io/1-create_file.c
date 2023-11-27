
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

	int len = strlen(text_content);

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
		b = write(fd, text_content, len);

		if (b == -1)
			return (0);
	}

	close(fd);
	return (1);

}
