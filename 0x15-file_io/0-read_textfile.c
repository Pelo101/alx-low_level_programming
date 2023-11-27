#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 *read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 *@filename: file to be read.
 *@letters: letters to be read and print.
 *Return: Amount of expected bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	char *buffer;
	ssize_t n, b;

	fd = open(filename, O_RDONLY);

	if (filename == NULL)
	{
		return (0);

	}

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));

	if (buffer  == NULL)
	{

		return (0);
	}

	n = read(fd, buffer, letters);
	b = write(STDOUT_FILENO, buffer, n);

	free(buffer);
	close(fd);

	return (b);

}
