#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: string to write to the file
 * Return: 1 on success or -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
