#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

/**
 *append_text_to_file - function that appends text at the end of a file.
 *@filename: file to append to.
 *@text_content: string to append.
 *Return: 1 on Success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	int len = 0;
	ssize_t  n;


	if (fd == -1)
	{
		return (-1);
	}

	if (filename == NULL || text_content == NULL)
	{
		return (-1);

	}



	while (text_content[len] != '\0')
	{
	   len++;
	}


	n = write(fd, text_content, len);

	if (n == -1)
		return (-1);

	close(fd);
	return (1);
}
