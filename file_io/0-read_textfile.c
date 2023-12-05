#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: name of the textfile to be read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * 0 if filename is NULL and if the file can not be opened or read,
 * if write fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0;
	char *buffer = NULL;
	ssize_t bytesRead = 0, bytesWritten = 0;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytesRead = read(file, buffer, letters);

	if (bytesRead == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	buffer[bytesRead] = '\0';

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);

	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		return (0);
	}
	close(file);
	return (bytesRead);
}
