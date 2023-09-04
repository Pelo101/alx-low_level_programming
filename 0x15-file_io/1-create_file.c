#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
*create_file - Create a function that creates a file
*@filename: file to create.
*@text_content: string.
*Return: 1 on success , -1	failure.
*/

int create_file(const char *filename, char *text_content)
{

	int fd;
	size_t len = 0;
	ssize_t _write;

	if (filename == NULL)
	{

		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL && len  > 0)
	{
		_write = write(fd, text_content, len);

		if (_write == -1 || (size_t)_write !=  len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);

}
