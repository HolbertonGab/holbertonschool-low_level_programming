#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file = 0;
	size_t size = 0;
	ssize_t result = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0644);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (-1);
	}
	size = strlen(text_content);
	result = write(file, text_content, size);

	close(file);

	if (result == -1)
		return (-1);

	return (1);
}
