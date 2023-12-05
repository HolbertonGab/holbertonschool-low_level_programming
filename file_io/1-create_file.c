#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file = 0, length = 0, bytesWritten = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		bytesWritten = write(file, text_content, length);
		if (bytesWritten != length)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
