#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
*read_textfile -  function that reads a text file and prints it to
*the POSIX standard output.
*@filename: name of file.
*@letters: number of letters.
*Return: actual numbers of letters it could read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

	char  *buffer;
	ssize_t _read, _write;
	int fd;


	if (filename == NULL)
	{return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{	close(fd);
		return (0);
	}
	_read = read(fd, buffer, letters);

		if (_read == -1)
		{	free(buffer);
			close(fd);
			return (0);

		}
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1 || _write != _read)
	{	free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (_read);


}


