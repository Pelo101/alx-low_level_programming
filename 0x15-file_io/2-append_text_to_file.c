#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
*append_text_to_file - function that appends text at the end of a file.
*@filename: file.
*@text_content: string.
*Return: 1 on Success and -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	ssize_t _write;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);

	if (fd == -1)
	{
		return (-1);

	}

	while (text_content[len] != '\0')
		len++;

	_write = write(fd, text_content, len);

	if (_write == -1 || (size_t) _write != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);

}
